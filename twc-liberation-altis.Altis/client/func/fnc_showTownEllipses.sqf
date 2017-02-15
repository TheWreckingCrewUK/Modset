//Shows the markers
if(townEllipsesHidden)then{
	{
		if(_x in townEllipses)then{
			_x setMarkerAlpha 1;
		};
	}forEach allMapMarkers;
	townEllipsesHidden = false;
}else{
	{
		if(_x in townEllipses)then{
			_x setMarkerAlpha 0;
		};
	}forEach allMapMarkers;
	townEllipsesHidden = true;
};