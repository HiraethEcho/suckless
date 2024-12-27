#define CMDLENGTH 100
#define DELIMITER " "
#define CLICKABLE_BLOCKS 1


const Block blocks[] = {
	// BLOCK("block_resources",1 ,1),
  // mainbar
	BLOCK("block_wifi",    30,  1),
	BLOCK("block_pulse",   30,  3),
	BLOCK("block_battery", 60, 4),
	BLOCK("block_time",    60, 5),
  // split
  {"echo ';'" ,0,0},
  // extrabar
	// BLOCK("block_resources", 2, 7),
	BLOCK("block_light",     0, 2),
	BLOCK("block_progress",  300, 6),
};

