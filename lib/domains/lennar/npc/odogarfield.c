#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("Odo Garfield");
    SetId( ({"odo"}) );
    SetAdjectives(({"non player"}));
    SetShort("Odo Garfield");
    SetLong("This dark-skinned man stands 5'11\" and tends to wear a heavy leather apron. Coupled with his rolled up shirt sleeves this gives him a very relaxed look. His long blonde hair reaches down to his waist. His brown eyes have a joyful gleam in them most of the time.");
    SetLevel(1);
    SetMelee(1);
    SetRace("human");
    SetGender("male");
}
void init(){
    ::init();
}
