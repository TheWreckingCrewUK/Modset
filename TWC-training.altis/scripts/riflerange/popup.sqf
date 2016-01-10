_inc     = 0;
_count   = 0;
_targets = [pt1,pt2, pt3, pt4, pt5, pt6, pt7, pt8, pt9, pt10, pt11, pt12, pt13, pt14, pt15, pt16, pt17, pt18, pt19, pt20, pt21, pt22, pt23, pt24, pt25, pt26, pt27, pt28, pt29, pt30, pt31, pt32, pt33, pt34, pt35, pt36, pt37, pt38, pt39, pt40, pt41, pt42, pt43, pt44, pt45, pt46, pt47, pt48, pt49];
_many    =  count _targets;
nopop=true;
{_x  animate["terc",1]} forEach _targets;

hint "Setting up the Range";
sleep 2;
hint "Ready";
sleep 2;


while {_inc<20} do 
{
_rnumber = random _many-1;
_rtarget = _targets select _rnumber;
_rtarget animate["terc", 0];
sleep 5;
 if (_rtarget animationPhase "terc" > 0.1) then
{
		_count = _count+1;
		    };
   hint format ["Targets :%1 Hit :%2",_inc+1,_count];
_rtarget animate["terc", 1];
_inc = _inc + 1;
};
sleep 8;
hint "Session Complete";
sleep 8;
nopop=false;