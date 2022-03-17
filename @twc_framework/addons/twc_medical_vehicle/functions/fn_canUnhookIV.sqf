/*	pre-reqs:
 *	- must be in a medical vehicle
 *	- must not be bleeding
 *	- requires the patient to have some blood (about two thirds of their blood level?)
 */
params ["_medic", "_patient", "_bodyPart", "_treatmentClassname"];

_patient getVariable ["TWC_Medical_receivingIV", false]