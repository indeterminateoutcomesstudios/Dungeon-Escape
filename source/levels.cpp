#include "DungeonEscape.hpp"
#include "levels.hpp"

level return_data(0, 0, extra(std::vector<bool>({ false })), {room({ WALL })}, false, 0);

level getLevel(int chapter, int lvl) {
	switch (chapter) {
	case 0:
		switch (lvl) {
		case 0:
			return_data.width = 8;
			return_data.height = 10;
			return_data.rooms = {
			room({ WALL }),
			room({ WALL }),
			room({ START, WALL_L, WALL_U, WALL_R }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }), //row 1
			room({ WALL }),
			room({ WALL }),
			room({ EMPTY, WALL_L, WALL_R }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }), //row 2
			room({ EMPTY, WALL_L, WALL_U }),
			room({ EMPTY, WALL_U, WALL_D }),
			room({ EMPTY, SMALL_RIGHT }),
			room({ EMPTY, CRAWL_LR }),
			room({ EMPTY, CRAWL_LD }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }), //row 3
			room({ EMPTY, WALL_L, WALL_R }),
			room({ WALL }),
			room({ EMPTY, WALL_L, WALL_R }),
			room({ WALL }),
			room({ EMPTY, WALL_L, SMALL_UP, WALL_D }),
			room({ EMPTY, WALL_U, LOCK_R, SMALL_DOWN },{ EMPTY, WALL_U, /*UNLOCK_R,*/ SMALL_DOWN }, false),
			room({ EXIT, WALL_U, WALL_D, LOCK_L, WALL_R }, { EXIT, WALL_U, WALL_D, WALL_R }, false),
			room({ WALL }), //row 4
			room({ EMPTY, WALL_L, WALL_R }),
			room({ WALL }),
			room({ EMPTY, WALL_L, WALL_D },{ EMPTY, WALL_L }, true),
			room({ EMPTY, WALL_U, WALL_D }),
			room({ TELEPORT, WALL_U, WALL_R, WALL_D }, 49),
			room({ EMPTY, CRAWL_UD }),
			room({ WALL }),
			room({ WALL }), //row 5
			room({ EMPTY, WALL_L, WALL_R }),
			room({ WALL },{ EMPTY, WALL_U, WALL_L, WALL_D }, true),
			room({ WALL },{ EMPTY, WALL_R, WALL_D }, true), //room 43 (42 + 1)
			room({ WALL_U, WALL_L, PRESSURE_PLATE },{ 34, 41, 42 }),
			room({ EMPTY, WALL_U, WALL_D, SMALL_RIGHT }),
			room({ CRAWL_LU, PRESSURE_PLATE }, { 29, 30 }),
			room({ WALL }),
			room({ WALL }), //row 6
			room({ EMPTY, WALL_L, WALL_R }),
			room({ WALL_U, WALL_L, WALL_D, TELEPORT }, 36),
			room({ EMPTY, WALL_U, WALL_D }),
			room({ EMPTY, WALL_R, WALL_D }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL_U, WALL_L, WALL_R, FORCE_D }), //row 7
			room({ EMPTY, WALL_L, WALL_R }),
			room({ WALL }),
			room({ TELEPORT, WALL_L, WALL_U, WALL_R }, 55),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ PRESSURE_PLATE, WALL_L, WALL_R },{ 64, 65, 66 }), //row 8
			room({ EMPTY, WALL_L, WALL_D },{ EMPTY, WALL_L, WALL_D, WALL_R }, true),
			room({ EMPTY, WALL_U, WALL_D },{ EMPTY, WALL }, true),
			room({ EMPTY },{ EMPTY, WALL_L }, true),
			room({ HIDDEN, KILL, WALL_U, WALL_R, WALL_D }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ TELEPORT, WALL_L, WALL_D, WALL_R }, 10), //row 9
			room({ WALL }),
			room({ WALL }),
			room({ WALL_L, WALL_D, WALL_R, POWERUP }, new int[2]{ TINY, 3 }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }),
			room({ WALL }) //row 10
			};
			return_data.has_custom_function = false;
			break;
		case 1:
			return_data.width = 9;
			return_data.height = 9;
			return_data.rooms = {
				room({ START, WALL_U, WALL_L, WALL_D }),
				room({ EMPTY, WALL_U, SMALL_DOWN, SMALL_RIGHT }),
				room({ EMPTY, CRAWL_LR }),
				room({ EMPTY, SMALL_LEFT, WALL_U, WALL_D, SMALL_RIGHT }),
				room({ EMPTY, CRAWL_LD }),
				room({ POWERUP, WALL_U, CRAWL_UD }, new int[2]{ CROUCH, 3 }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }), //row 1
				room({ WALL }),
				room({ EMPTY, CRAWL_UD }),
				room({ EMPTY, WALL_U, WALL_L }),
				room({ EMPTY, WALL_U, WALL_D }),
				room({ EMPTY, SMALL_DOWN, SMALL_UP, SMALL_RIGHT }),
				room({ EMPTY, CRAWL_LU }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }), //row 2
				room({ HIDDEN, WALL_U, WALL_L, WALL_R, KILL }),
				room({ WALL_L, WALL_D, WALL_R, SMALL_UP, POWERUP }, new int[2]{ TINY, 3 }),
				room({ EMPTY, WALL_L, WALL_R }),
				room({ HIDDEN, TELEPORT, WALL_L, WALL_U, WALL_R }, 24),
				room({ SMALL_UP, WALL_L, WALL_D, SPIKES }),
				room({ WALL_U, WALL_R, WALL_D, POWERUP }, new int[2]{ KEY, 1 }),
				room({ WALL_U, WALL_L, WALL_D, NULL_TELEPORT }),
				room({ WALL_U, WALL_D, SPIKES }),
				room({ WALL_U, WALL_R, CHEST }), //row 3
				room({ WALL_L, WALL_D, EMPTY }),
				room({ HIDDEN, PRESSURE_PLATE, WALL_U, WALL_R },{ 36, 37 }),
				room({ EMPTY, WALL_L, WALL_D }),
				room({ EMPTY }),
				room({ HIDDEN, WALL_U, WALL_R, WALL_D, KILL }),
				room({ EMPTY, WALL_L, WALL_U }),
				room({ EMPTY, WALL_U, WALL_D }),
				room({ EMPTY, WALL_U, WALL_R }),
				room({ EMPTY, WALL_L, WALL_R },{ EMPTY, WALL_L, WALL_R, WALL_D }, true), //row 4
				room({ HIDDEN, WALL },{ HIDDEN, EXIT, WALL_U, WALL_L, WALL_D }, true),
				room({ EMPTY, WALL_L },{ EMPTY }, true),
				room({ EMPTY, WALL_U, WALL_R }),
				room({ HIDDEN, WALL_L, WALL_D, WALL_R, KILL }),
				room({ WALL }),
				room({ EMPTY, WALL_L, WALL_R }),
				room({ WALL }),
				room({ SPIKE_WALL_L, SPIKE_WALL_D, PRESSURE_PLATE },{ SPIKE_WALL_L, SPIKE_WALL_D, PRESSURE_PLATE, WALL_R }, true,{ 43, 44, 35 }),
				room({ EMPTY, WALL_R, WALL_D },{ WALL }, true), //row 5
				room({ WALL }),
				room({ HIDDEN, WALL_L, WALL_D, WALL_R, PRESSURE_PLATE },{ 36, 37 }),
				room({ EMPTY, WALL_L, WALL_D }),
				room({ EMPTY, WALL_U, WALL_D }),
				room({ SPIKE_WALL_U, WALL_D }, new int[2]{ COINS, 2 }),
				room({ WALL_D },{ WALL_D, POWERUP }, new int[2]{ LIFE, 1 }, false),
				room({ HIDDEN, WALL_U, WALL_D, TELEPORT, SPIKE_WALL_R }, 60),
				room({ WALL }),
				room({ WALL }), //row 6
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL },{ WALL }, true),
				room({ WALL_U, WALL_L, WALL_R, TELEPORT }, 51),
				room({ WALL }),
				room({ WALL }), //row 7
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL_U, WALL_L, WALL_D, HIDDEN, PRESSURE_PLATE },{ 50, 59 }),
				room({ EMPTY }),
				room({ HIDDEN, WALL_U, WALL_D, WALL_R, POWERUP }, new int[2]{ COINS, 50 }),
				room({ WALL }), //row 8
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL_L, WALL_D, WALL_R, HIDDEN, POWERUP }, new int[2]{ TINY, 3 }),
				room({ WALL }),
				room({ WALL }) //row 9
			};
			return_data.has_custom_function = false;
			break;
		case 2:
			return_data.width = 6;
			return_data.height = 10;
			return_data.rooms = {
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL }), //row 1
				room({ WALL }),
				room({ WALL_L, WALL_U, EMPTY }),
				room({ WALL_U, WALL_D, EMPTY }),
				room({ WALL_U, WALL_D, EMPTY }),
				room({ SPIKE_WALL_U, SPIKE_WALL_R, EMPTY }),
				room({ WALL }), //row 2
				room({ WALL }),
				room({ WALL_L, WALL_R, EMPTY }), //originally had an "easy bossfight"
				room({ WALL_U, WALL_L, WALL_D, POWERUP }, new int[2]{ COINS, 80 }),
				room({ WALL_U, WALL_D, SPIKES, EMPTY }),
				room({ WALL_R }),
				room({ WALL }), //row 3
				room({ WALL }),
				room({ WALL_L, WALL_R, EMPTY }),
				room({ WALL }),
				room({ WALL_L, WALL_U, WALL_R, TELEPORT }, 51),
				room({ WALL_L, SPIKE_WALL_R, EMPTY }),
				room({ WALL }), //row 4
				room({ WALL_L, WALL_U, EMPTY, WAY1OUTR }),
				room({ WALL_R, EMPTY, WAY1INL, WAY1IND }),
				room({ HIDDEN, WALL_U, WALL_L, WALL_D, KILL }),
				room({ EMPTY }),
				room({ NULL_TELEPORT, WALL_R, WALL_D }),
				room({ WALL }), //row 5
				room({ WALL_L, WALL_R, EMPTY }), //originally called you a loser for taking the pussy route
				room({ WALL_L, WALL_R, HIDDEN, WAY1OUTU }), //originally had a "hard bossfight"
				room({ WALL_L, WALL_U, WALL_D, START }),
				room({ EMPTY, SMALL_RIGHT, SMALL_DOWN }),
				room({ CRAWL_LD, HIDDEN }),
				room({ WALL }), //row 6
				room({ WALL_L, WALL_R, EMPTY }),
				room({ WALL_L, WALL_R, WAY1IND, POWERUP }, new int[2]{ COINS, 4 }),
				room({ WALL_L, WALL_U, WALL_R, HIDDEN, POWERUP }, new int[2]{ COINS, 50 }),
				room({ HIDDEN, CRAWL_UD }),
				room({ WALL_L, WALL_R, HIDDEN, POWERUP }, new int[2]{ COINS, 2 }),
				room({ WALL }), //row 7
				room({ WALL_L, WALL_D, EMPTY, WAY1INR }),
				room({ WAY1OUTL, WAY1OUTU, WALL_D, WALL_R, EXIT }),
				room({ WALL_L, WALL_D, POWERUP }, new int[2]{ COINS, 10 }),
				room({ EMPTY, WALL_R, WALL_D, SMALL_UP }),
				room({ HIDDEN, TELEPORT, WALL_L, WALL_D, WALL_R }, 28),
				room({ WALL }), //row 8
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL_L, WALL_R, WALL_U, NULL_TELEPORT }),
				room({ WALL }),
				room({ WALL }), //row 9              MISSING ROOM BETWEEN ROW 9 AND 10
				room({ WALL }),
				room({ WALL }),
				room({ WALL }),
				room({ WALL_L, WALL_D, WALL_R, KILL, HIDDEN }),
				room({ WALL }),
				room({ WALL }) //row 10
			};
			return_data.has_custom_function = false;
			break;
		case 3:
			return_data.width = 9;
			return_data.height = 11;
			return_data.rooms = {
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}), //row 0
				room({WALL}),
				room({WALL_U, WALL_L, WALL_D, START, WAY1INR}),
				room({WALL_U, WAY1OUTL, WAY1INR, EMPTY}),
				room({WAY1OUTL, WALL_U, WALL_D, EMPTY}, {WAY1INL, WALL_U, WALL_D, EMPTY, WALL_R}, true),
				room({WALL_U, EMPTY, WAY1OUTR}, {WALL_U, WALL_L, WALL_D, EMPTY, WAY1OUTR}, true),
				room({WALL_U, EMPTY, WALL_R, WAY1INL, WAY1IND}),
				room({WALL_U, WALL_L, SPIKE_WALL_R, SPIKE_WALL_D, NULL_TELEPORT}),
				room({SPIKE_WALL_L, SPIKE_WALL_D, WALL_U, WALL_R, NULL_TELEPORT}),
				room({WALL}), //row 1
				room({WALL}),
				room({HIDDEN, WALL_L, WALL_U, WALL_D, WAY1OUTR, TELEPORT}, 66),
				room({WAY1INL, WAY1IND, WALL_R, EMPTY}),
				room({WALL_L, WALL_U, HIDDEN, WALL_R, WAY1OUTD, POWERUP}, new int[2]{COINS, 10}),
				room({WALL_L, WALL_D, HIDDEN, PRESSURE_PLATE, WAY1INR}, {WALL_L, WALL_D, HIDDEN, PRESSURE_PLATE, WAY1OUTR, WALL_U}, true),
				room({WAY1OUTL, WAY1OUTU, WALL_R, WALL_D, EMPTY}),
				room({WALL_L, WALL_D, SPIKE_WALL_U, SPIKE_WALL_R, NULL_TELEPORT}),
				room({WALL_D, WALL_R, SPIKE_WALL_L, SPIKE_WALL_U, NULL_TELEPORT}),
				room({WALL}), //row 2
				room({WALL}),
				room({HIDDEN, WALL_L, WALL_U, WALL_D, TELEPORT, WAY1OUTR}, 15),
				room({EMPTY, WAY1INL, WAY1INR, WAY1OUTU, WAY1OUTD}),
				room({EMPTY, WAY1OUTL, WAY1INR, WAY1INU}),
				room({HIDDEN, WAY1OUTL, WAY1INR, WALL_U, WALL_D, POWERUP}, new int[2]{TINY, 3}),
				room({EMPTY, WAY1OUTL, WALL_R, WALL_U}),
				room({TELEPORT, WALL_L, WALL_R, WALL_U, WAY1OUTD}, 25),
				room({WALL}),
				room({WALL}), //row 3
				room({WALL}),
				room({HIDDEN, WALL_L, WAY1OUTR, WALL_U, WAY1IND}), //originally had a "Monster Fight"
				room({EMPTY, WAY1INL, WALL_R, WAY1INU}),
				room({EMPTY, WALL_L, WALL_D}),
				room({EMPTY, WALL_U}),
				room({EMPTY, WALL_R, WALL_D}, {EMPTY, WALL_D}, true),
				room({EMPTY, WALL_L, WAY1INU}, {EMPTY, WAY1INU}, true),
				room({EMPTY, WALL_R, SPIKE_WALL_U}),
				room({WALL}), //row 4
				room({WALL}),
				room({HIDDEN, POWERUP, WALL_L, WALL_R, WAY1OUTU, WAY1IND}, new int[2]{LIFE, 1}),
				room({PRESSURE_PLATE, WALL_L, WALL_D}), //originally this pressure plate was labeled as 'secret', but uh... if there was a secret, I forgot what it was years ago. I'll put it here anyway to fuck with the players mind :p
				room({EMPTY, WALL_R, WALL_U, WAY1OUTD}),
				room({EMPTY, WALL_L}),
				room({HIDDEN, PRESSURE_PLATE, WALL_R, WALL_U, WALL_D}, {41, 42}),
				room({HIDDEN, TELEPORT, WALL_L, WALL_R, WALL_U}, 16),
				room({EMPTY, WALL_L, WALL_R}),
				room({WALL}), //row 5
				room({WALL}),
				room({EMPTY, WALL_L, WAY1OUTU, WALL_D}),
				room({EMPTY, WALL_U, SPIKE_WALL_D}),
				room({EMPTY, WAY1INU, WALL_D}),
				room({EMPTY, WALL_R, WAY1OUTD}),
				room({EMPTY, WALL_L, WALL_U}),
				room({EMPTY}),
				room({EMPTY, WALL_R, WALL_D}),
				room({WALL}), //row 6
				room({WALL}),
				room({EXIT, WALL_L, WALL_R, WALL_U, WALL_D}, {EXIT, WALL_L, WALL_R, WALL_U}, false),
				room({WALL}),
				room({HIDDEN, NULL_TELEPORT, WALL_L, WAY1INR, WALL_U, WALL_D}),
				room({HIDDEN, POWERUP, WAY1OUTL, WALL_R, WAY1INU, WALL_D}, new int[2]{LIFE, 1}),
				room({HIDDEN, WALL_L, WALL_R}), //also originally had a monster fight
				room({HIDDEN, POWERUP, WALL_L, WALL_R, WALL_D}, new int[2]{COINS, 2}),
				room({TELEPORT, WALL_L, WALL_R, WALL_U}, 24),
				room({WALL}), //row 7
				room({WALL}),
				room({EMPTY, WALL_L, WALL_U, WAY1OUTD}, {EMPTY, WALL_L, WAY1OUTD}, false), //originally had a "retry clock" based off of the retry clock from Mario & Luigi: Bowser's Inside Story, it functioned the same way
				room({PRESSURE_PLATE, WALL_R, WALL_U, WALL_D}, {64, 73}), //originally had a boss fight, but now it's just a pressure_plate :/
				room({EMPTY, WALL_L, WAY1OUTR, WALL_U, WAY1IND}),
				room({EMPTY, WAY1INL, WALL_U}),
				room({EMPTY, WAY1IND}),
				room({EMPTY, WAY1INR, WALL_U, WAY1IND}),
				room({HIDDEN, EMPTY, WAY1OUTL, WALL_R, WALL_D}),
				room({WALL}), //row 8
				room({WALL}),
				room({EMPTY, WALL_L, WAY1OUTR, WAY1INU, WALL_D}),
				room({EMPTY, WAY1INL, WAY1OUTR, WALL_U, WALL_D}),
				room({EMPTY, WAY1INL, WALL_R, WAY1OUTU, WALL_D}),
				room({HIDDEN, KILL, WALL_L, WALL_R, WALL_D}),
				room({HIDDEN, KILL, WALL_L, WALL_R, WAY1OUTU, WALL_D}),
				room({EMPTY, WALL_L, WAY1OUTU, WALL_D}), //originally had another one of those 'lol' rooms that would call you a loser
				room({KILL, WALL_R, WALL_U, WALL_D}),
				room({WALL}), //row 9
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}) //row 10
			};
			return_data.has_custom_function = false;
			break;
		case 4:
			return_data.width = 8;
			return_data.height = 8;
			return_data.extra_data = extra(std::vector<bool>({ true, false, false }));
			return_data.rooms = {
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}), //row 0
				room({WALL}),
				room({EMPTY, WALL_L, WALL_U}),
				room({EMPTY, WALL_U, WALL_D}),
				room({EMPTY, WALL_U}),
				room({EMPTY, WAY1OUTR, WALL_U}),
				room({START, WAY1INL, WALL_R, WALL_U, WALL_D}),
				room({WALL}),
				room({WALL}), //row 1
				room({WALL}),
				room({EMPTY, WALL_L, WALL_R}),
				room({WALL}),
				room({EMPTY, SPIKE_WALL_L, WALL_R}),
				room({HIDDEN, WALL_L, WALL_R, WALL_D, UBER}),
				room({WALL}),
				room({WALL}),
				room({WALL}), //row 2
				room({WALL}),
				room({EMPTY, WALL_L, WALL_D}),
				room({EMPTY, WALL_R, WALL_U}),
				room({EMPTY, WALL_L, WALL_D}),
				room({EMPTY, WAY1INR, WALL_U, WAY1IND}),
				room({EMPTY, WAY1OUTL, WALL_R, WALL_U}),
				room({PRESSURE_PLATE, WALL_L, WALL_R, WALL_U}, special(2)),
				room({WALL}), //row 3
				room({WALL}),
				room({PRESSURE_PLATE, WALL_L, WALL_R, WALL_U}, {PRESSURE_PLATE, WALL_L, WALL_R, WALL_U, WALL_D}, true, {33, 41, 49}),
				room({EMPTY, WALL_L, SPIKE_WALL_R}),
				room({WALL}),
				room({HIDDEN, WALL_L, WALL_R, WAY1OUTU, WALL_D, KILL}),
				room({EMPTY, WALL_L, WALL_D}, {EMPTY, WALL_L}, true),
				room({WALL_R, WALL_D}),
				room({WALL}), //row 4
				room({WALL}),
				room({PRESSURE_PLATE, WALL_L, WALL_R}, {WALL}, special(1), true),
				room({EMPTY, WALL_L, SPIKE_WALL_R}),
				room({WALL}),
				room({WALL}),
				room({WALL}, {EMPTY, SPIKE_WALL_L, WALL_R}, true),
				room({WALL}),
				room({WALL}), //row 5
				room({WALL}),
				room({EMPTY, WALL_L, WALL_D}, {EMPTY, WALL_L, WALL_U, WALL_D}, true),
				room({EMPTY, WALL_D}),
				room({PRESSURE_PLATE, SPIKE_WALL_R, SPIKE_WALL_U, WALL_D}, {33, 41, 49}),
				room({WALL}),
				room({EXIT, WALL_L, WALL_R, WALL_U, WALL_D}, {EXIT, WALL_L, WALL_R, WALL_D}, true),
				room({WALL}),
				room({WALL}), //row 6
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}),
				room({WALL}) //row 7
			};
			return_data.has_custom_function = true;
			return_data.custom_function = 0;
			break;
		}
		break;
	}
	if (return_data.width == 0) error = true;
	return return_data;
}

void custom_level_function(level &current_level) {
	//I feel like this custom_level_function could be used to easily (well maybe not that easy) mod the game or just add future things into the code without having to complete change the way a
	//room variable/object is created. Granted you wouldn't want to clutter this area up, because that could significantly affect the processing time, this is mainly for things that are almost 1 off's.
	//which this whole: 2 pressure_plates activated to open a door is (so far) unique to this level. I also may have to change it more so that you can only toggle the variable to true when you stand on
	//the pressure plate because I think that's how I originally invisioned it, and I didn't think about how after activating them maybe you could reactivate it to close it again.
	switch (current_level.custom_function) {
	case 0:
		if (current_level.extra_data.extra_bool[1] && current_level.extra_data.extra_bool[2]) {
			current_level.rooms[37].activate();
			current_level.rooms[45].activate();
			current_level.rooms[53].activate();
			current_level.extra_data.extra_bool[1] = false;
			current_level.extra_data.extra_bool[2] = false;
		}
		break;
	}
}
