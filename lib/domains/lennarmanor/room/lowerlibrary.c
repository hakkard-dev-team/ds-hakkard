#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("copy of start.c");
    SetLong("This is a long room with ornate pillars. You can see stacks of books to the east. To the west you can see a small tea room. To the north is a large staircase.");
    SetExits(([
        "west" : "/domains/lennarmanor/room/start",
      ]));

}
void init(){
    ::init();
}
