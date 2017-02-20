/*
* Author: [TWC] jayman
* Deletes Syrette and calls normal ACE Morphine
*
* Arguments:
* 0: MEDIC <OBJECT> 
* 1: TARET <OBJECT>
* 2: SELECTION <STRING>
* 3: ITEMNAME <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [player,player, 'hand_l','TWC_Syrette'] call twc_fnc_useSyrette;
*
* Public: No
*/
params["_medic","_patient","_selctionName","_className"];
	
if(_className in (items _patient))then{
	_patient removeItem _className;
	_patient addItem "ace_morphine";
}else{
	_medic removeItem _className;
	_medic addItem "ace_morphine";
};

[_medic,_patient,_selctionName,"morphine"] call ace_medical_fnc_treatment;