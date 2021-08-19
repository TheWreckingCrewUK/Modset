@ECHO OFF
setlocal ENABLEDELAYEDEXPANSION

echo Will need Mikero's PBO tools installed...

for /d %%i in (*) do (
	set fldr=%%i
	
	IF "!fldr!" == "@twc_config" (
		set "tmp=%~dp0%%i\addons"
		echo !tmp!
		
		cd !tmp!
		for /d %%a in (*) do (
			echo Pboing %%a
			makePbo -AB -X "thumbs.db,*.txt,*.h,*.dep,*.cpp,*.bak,*.png,*.log,*.pew,source" -Z=default -@=%%a !tmp!\%%a
		)
	)
)

PAUSE