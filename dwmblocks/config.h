#define CMDLENGTH 1000
#define DELIMITER ""
#define CLICKABLE_BLOCKS 1


const Block blocks[] = {
	BLOCK("block_battery",   60,  1),
	BLOCK("block_progress",  300, 2),
  {"echo ';'" ,0,0},
	BLOCK("block_wifi",      30,  4),
	BLOCK("block_pulse",     10,   5),
	BLOCK("block_light",     0,   6),
};

	// BLOCK("block_time",    60, 3),
	// BLOCK("block_resources", 2, 7),

// works
/*
	BLOCK("block_battery",   60,  1),
	BLOCK("block_pulse",     10,   5),
	BLOCK("block_light",     0,   6),
	BLOCK("block_progress",  300, 2),
  {"echo ';'" ,0,0},
	BLOCK("block_resources", 2, 7),
	BLOCK("block_wifi",      30,  4),
*/
/*
	BLOCK("block_battery",   60,  1),
	BLOCK("block_progress",  300, 2),
	BLOCK("block_resources", 2, 7),
  {"echo ';'" ,0,0},
	BLOCK("block_wifi",      30,  4),
	BLOCK("block_pulse",     10,   5),
	BLOCK("block_light",     0,   6),
*/
/*
	BLOCK("block_battery", 60, 2),
	BLOCK("block_progress",  300, 6),
  {"echo ';'" ,0,0},
	BLOCK("block_wifi",    30,  1),
	BLOCK("block_pulse",   30,  5),
	BLOCK("block_light",     0, 4),
*/
/*
	BLOCK("block_pulse",   30,  5),
	BLOCK("block_battery", 60, 2),
	BLOCK("block_progress",  300, 6),
  {"echo ';'" ,0,0},
	BLOCK("block_wifi",    30,  1),
	BLOCK("block_light",     0, 4),
*/
/*
	BLOCK("block_battery", 60, 2),
	BLOCK("block_resources",1 ,7),
	BLOCK("block_wifi",  30, 1),
	BLOCK("block_progress",  300, 6),
  {"echo ';'" ,0,0},
	BLOCK("block_pulse", 0,  5),
	BLOCK("block_light", 0,  4),
*/
/*
	BLOCK("block_battery", 60, 2),
	BLOCK("block_resources",1 ,7),
	BLOCK("block_wifi",  30, 1),
	BLOCK("block_progress",  300, 6),
	BLOCK("block_pulse", 0,  5),
	BLOCK("block_light", 0,  4),
  {"echo ';'" ,0,0},
*/
/*
	BLOCK("block_battery", 60, 2),
	BLOCK("block_wifi",  30, 1),
	BLOCK("block_progress",  300, 6),
	BLOCK("block_pulse", 0,  5),
	BLOCK("block_light", 0,  4),
  {"echo ';'" ,0,0},
	BLOCK("block_resources",1 ,7),
*/
/*
	BLOCK("block_battery", 60, 2),
	BLOCK("block_wifi",  30, 1),
	BLOCK("block_progress",  300, 6),
	BLOCK("block_pulse", 0,  5),
	BLOCK("block_light", 0,  4),
  {"echo ';'" ,0,0},
	BLOCK("block_cpu",1 ,8),
	BLOCK("block_resources",1 ,7), 
*/

// not work
/*
	BLOCK("block_progress",  300, 6),
  {"echo ';'" ,0,0},
	BLOCK("block_battery", 60, 2),
	BLOCK("block_wifi",    30,  1),
	BLOCK("block_pulse",   30,  5),
	BLOCK("block_light",     0, 4),
*/
/*
	BLOCK("block_battery",   60,  1),
	BLOCK("block_progress",  300, 2),
  {"echo ';'" ,0,0},
	BLOCK("block_resources", 1,   3),
	BLOCK("block_wifi",      30,  4),
	BLOCK("block_pulse",     10,   5),
	BLOCK("block_light",     0,   6),
*/
