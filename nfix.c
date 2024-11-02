#include <ncurses.h>

signed main(){
	initscr();

	echo();
	curs_set(1);
	nocbreak();

	endwin();
	return 0;
}
