params["_player"];

if(isNil "twc_cachePlayers")then{
	twc_cachePlayers = [];
};
twc_cachePlayers pushBack _player;
(group _player) setVariable ["twc_cacheDisabled",true];