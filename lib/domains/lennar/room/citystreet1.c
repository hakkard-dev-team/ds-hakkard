#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Elma Street");
    SetLong("This is a long north-south street that bisects Lennar. To the north you see a large city square with a statue. To the west is the Prancing Dolphin tavern.");
    SetExits(([
        "west" : "/domains/lennar/room/start",
      ]));

    SetClimate("indoors");

    SetDoor("west", "/domains/lennar/doors/dolphintostreet.c");

}
void init(){
    ::init();
}
