#include "DBCDeclarations.h"

const char SpellEntryfmtWOTLK[] = "niiiiiiiiiiiixixiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiifxiiiiiiiiiiiiiiiiiiiiiiiiiiiifffiiiiiiiiiiiiiiiiiiiiifffiiiiiiiiiiiiiiifffiiiiiiiiiiiiiissssssssssssssssxssssssssssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxiiiiiiiiiiixfffxxxiiiiixxxxxxi";
const char SpellEntryfmtTBC[] = "nixiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiifxiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiffffffiiiiiiiiiiiiiiiiiiiiifffiiiiiiiiiiiiiiifffixiiissssssssssssssssxssssssssssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxiiiiiiiiiixfffxxxiiii";
       const char SpellEntryfmt[] = "niixiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiifiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiffffffiiiiiiiiiiiiiiiiiiiiifffiiiiiiiiiiiifffixiixssssssssxssssssssxxxxxxxxxxxxxxxxxxxiiiiiiiiiixfffxxx";
const char SpellEntryfmtClassic[] = "niixiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiifxiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiffffffiiiiiiiiiiiiiiiiiiiiifffiiiiiiiiiiiifffixiiissssssssxssssssssxxxxxxxxxxxxxxxxxxxiiiiiiiiiixfffxxx";
const char DungeonEncounterFmt[] = "iiiiissssssssssssssssii";

// to get respective SQL to C++ fmt just remove all x

DBCStorage <SpellEntryWOTLK> sSpellStoreWOTLK(SpellEntryfmtWOTLK);
DBCStorage <SpellEntryTBC> sSpellStoreTBC(SpellEntryfmtTBC);
DBCStorage <SpellEntryClassic> sSpellStoreClassic(SpellEntryfmtClassic);
DBCStorage <DungeonEncounterEntry> sDungeonEncounterStore(DungeonEncounterFmt);