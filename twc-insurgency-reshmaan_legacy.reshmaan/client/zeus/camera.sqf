// REMOVE ZEUS Watermark for Video Capture
while {true} do {
   waitUntil { sleep 1; !isNull (findDisplay 312) };
   disableSerialization;
  _display = (findDisplay 312);
  _ctrl = _display displayCtrl 15717;
  _ctrl ctrlSetText "";
  // OR
  //_ctrl ctrlSetText "yourcustomlogo.paa";
  _ctrl ctrlCommit 0;
  waitUntil { sleep 1; isNull (findDisplay 312) };
};