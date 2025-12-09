ShadespurPokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ShadespurPokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ShadespurPokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_SHADESPUR_ISLE
	end

ShadespurPokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SHADESPUR_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
