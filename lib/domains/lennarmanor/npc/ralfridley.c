#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("generic npc");
    SetId( ({"ralf", "ralf ridley"}) );
    SetAdjectives(({"non player"}));
    SetShort("Ralf Ridley");
    SetLong("This is an older man who wears a faded coat and loose pants complete with feathered hat, he is not a threatening figure. He wears his hair in dreadlocks. His blue eyes lackadaisically let the world flow into them.");
    SetLevel(1);
    SetMelee(1);
    SetRace("human");
    SetGender("male");
}
void init(){
    ::init();
}
