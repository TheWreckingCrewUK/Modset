/*
 * Author: Bosenator
 *
 * Description:
 *   Send defined CTab message to defined user, from defined user. Used on most public missions to announce newcomer.
 *
 * Arguments:
 *   _recipient <OBJECT>
 *   _message <STRING>
 *   _sender <OBJECT>
 *
 * Return Value:
 *   N/A
 *
 * Example:
 *   [player, "Captains log, star date 16.01.2018 ..."] call twc_fnc_sendCTabMessage;
 *
 * Public: Yes
 */
params ["_recipient", "_message", "_sender"];

_date = date;
_hour = _date select 3;
_min = _date select 4;
if (_hour < 10) then {_hour = format ["0%1", _hour];};
if (_min < 10) then {_min = format ["0%1", _min];};

_time = format ["%1:%2", _hour, _min];
_msgTitle = format ["%1 - %2:%3 (%4)", _time, groupId (group _sender), [_sender] call CBA_fnc_getGroupIndex, name _sender];
_playerEncryptionKey = missionNamespace getVariable [format ["cTab_encryptionKey_%1", side _sender], ""];

["cTab_msg_receive", [_recipient, _msgTitle, _message, _playerEncryptionKey, _sender]] call CBA_fnc_whereLocalEvent;