// @BAKE gcc -o $* $@ $(pkg-config --cflags --libs ncurses)
#include <ncurses.h>

signed main(){
	initscr();

	echo();
	curs_set(1);
	nocbreak();

	endwin();
	return 0;
}
