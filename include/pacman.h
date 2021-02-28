#ifndef _PACMAN_H_
#define _PACMAN_H_

#define MAP_WIDTH_IN_TILES			28
#define MAP_HEIGHT_IN_TILES			31

// Corners:
// top-left: /
// top-right: `
// bottom-left: [
// bottom-right: ]
const char map[
	(MAP_HEIGHT_IN_TILES * MAP_WIDTH_IN_TILES) + 1
] = {
	"/------------`/------------`"
	"|            ||            |"
	"| /--` /---` || /---` /--` |"
	"| |xx| |xxx| || |xxx| |xx| |"
	"| [--] [---] [] [---] [--] |"
	"|                          |"
	"| /--` /` /------` /` /--` |"
	"| [--] || [--`/--] || [--] |"
	"|      ||    ||    ||      |"
	"[----` |[--` || /--]| /----]"
	"xxxxx| |/--] [] [--`| |xxxxx"
	"xxxxx| ||          || |xxxxx"
	"xxxxx| || +--__--+ || |xxxxx"
	"-----] [] |xxxxxx| [] [-----"
	"          |xxxxxx|          "
	"-----` /` |xxxxxx| /` /-----"
	"xxxxx| || +------+ || |xxxxx"
	"xxxxx| ||          || |xxxxx"
	"xxxxx| || /------` || |xxxxx"
	"/----] [] [--`/--] [] [----`"
	"|            ||            |"
	"| /--` /---` || /---` /--` |"
	"| [-`| [---] [] [---] |/-] |"
	"|   ||                ||   |"
	"[-` || /` /------` /` || /-]"
	"/-] [] || [--`/--] || [] [-`"
	"|      ||    ||    ||      |"
	"| /----][--` || /--][----` |"
	"| [--------] [] [--------] |"
	"|                          |"
	"[--------------------------]"
};

const char dot_placement_map[
	(MAP_HEIGHT_IN_TILES * MAP_WIDTH_IN_TILES) + 1
] = {
	"+------------++------------+"
	"|............||............|"
	"|.+--+.+---+.||.+---+.+--+.|"
	"|*|  |.|   |.||.|   |.|  |*|"
	"|.+--+.+---+.++.+---+.+--+.|"
	"|..........................|"
	"|.+--+.++.+------+.++.+--+.|"
	"|.+--+.||.+--++--+.||.+--+.|"
	"|......||....||....||......|"
	"+----+.|+--+ || +--+|.+----+"
	"     |.|+--+ ++ +--+|.|     "
	"     |.||          ||.|     "
	"     |.|| +--__--+ ||.|     "
	"-----+.++ |      | ++.+-----"
	"      .   |      |   .      "
	"-----+.++ |      | ++.+-----"
	"     |.|| +------+ ||.|     "
	"     |.||          ||.|     "
	"     |.|| +------+ ||.|     "
	"+----+.++ +--++--+ ++.+----+"
	"|............||............|"
	"|.+--+.+---+.||.+---+.+--+.|"
	"|.+-+|.+---+.++.+---+.|+-+.|"
	"|*..||.......  .......||..*|"
	"+-+.||.++.+------+.++.||.+-+"
	"+-+.++.||.+--++--+.||.++.+-+"
	"|......||....||....||......|"
	"|.+----++--+.||.+--++----+.|"
	"|.+--------+.++.+--------+.|"
	"|..........................|"
	"+--------------------------+"
};

#endif