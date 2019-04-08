// Don't use this outside of debugging something!
params ["_obj"];

bbox = [boundingBox _obj] call TWC_Core_fnc_boundingBoxToArray;
bboxr = [boundingBoxReal _obj] call TWC_Core_fnc_boundingBoxToArray;

_id = addMissionEventHandler ["Draw3D", {
	for "_i" from 0 to 7 step 2 do {
		drawLine3D [
			bbox select _i,
			bbox select (_i + 2),
			[0,0,1,1]
		];
		
		drawLine3D [
			bboxr select _i,
			bboxr select (_i + 2),
			[0,1,0,1]
		];
		
		drawLine3D [
			bbox select (_i + 2),
			bbox select (_i + 3),
			[0,0,1,1]
		];
		
		drawLine3D [
			bboxr select (_i + 2),
			bboxr select (_i + 3),
			[0,1,0,1]
		];
		
		drawLine3D [
			bbox select (_i + 3),
			bbox select (_i + 1),
			[0,0,1,1]
		];
		
		drawLine3D [
			bboxr select (_i + 3),
			bboxr select (_i + 1),
			[0,1,0,1]
		];
	};
}];

_id