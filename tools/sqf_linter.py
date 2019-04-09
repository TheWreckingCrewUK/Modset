#!/usr/bin/env python3

# Requires: https://github.com/LordGolias/sqf

import fnmatch
import os
import sys
import time
import argparse
from sqf.parser import parse
import sqf.analyzer
from sqf.exceptions import SQFParserError


def analyze(filename, startTime, writer=sys.stdout):
    warnings = 0
    errors = 0
    with open(filename, 'r') as file:
        code = file.read()
        try:
            result = parse(code)
        except SQFParserError as e:
            now = time.time()
            currentTime = now - startTime
            print("{0}: {1}".format(filename, currentTime))
            writer.write('    [%d,%d]:%s\n' % (e.position[0], e.position[1] - 1, e.message))
            return 0, 1

        exceptions = sqf.analyzer.analyze(result).exceptions
        if (exceptions): 
            now = time.time()
            currentTime = now - startTime
            print("{0}: {1}".format(filename, currentTime))
            for e in exceptions:
                if (e.message.startswith("error")):
                    errors += 1
                    writer.write('    [%d,%d]:%s\n' % (e.position[0], e.position[1] - 1, e.message))
                else:
                    warnings += 1
    
    return warnings, errors
         
def main():
    print("Validating SQF Lint");

    sqf_list = []
    all_warnings = 0
    all_errors = 0
    start = time.time()
    
    parser = argparse.ArgumentParser()
    parser.add_argument('-m','--module', help='only search specified module addon folder', required=False, default=".")
    args = parser.parse_args()
 
    for root, dirnames, filenames in os.walk('../' + args.module):
        for filename in fnmatch.filter(filenames, '*.sqf'):
            if 'fn_advancedTowingInit.sqf' not in filename:
                filePath = os.path.join(root, filename)
                if filePath not in sqf_list:
                    sqf_list.append(filePath)
    
    for filename in sqf_list:
        warnings, errors = analyze(filename, start, sys.stdout)
        all_warnings += warnings
        all_errors += errors
    
    print ("Parse Errors {0} - Warnings {1}".format(all_errors,all_warnings))

    # return (all_errors + all_warnings)
    return all_errors
    
if __name__ == "__main__":
    sys.exit(main())

