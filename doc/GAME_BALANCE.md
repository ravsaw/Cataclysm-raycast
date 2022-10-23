# Stat system scaling:
Ranges below will be using strength as the example since it's the easiest to itemize, but what the numbers mean is equivalent between all stats.

Minimal stat: 0 (Should only happen due to penalties, instant failure in most scenarios.  Basically actively dying, almost unable to even carry themselves.)

Very low stat: 4 (Lowest in chargen.  Either an average person who's injured or someone who's naturally very dainty and sedentary.)

Moderately low stat: 6 (Below average.  Sedentary job, not very active.)

Nominal stat: 8 ("Average" human.  Mostly sedentary job, somewhat active but not particularly a gym-goer, etc.)

Moderately high stat: 10 (Has a decent bit of strength.  Active job and/or works out consistently.)

Very high stat: 14 (Very strong.  Job is either based around fitness or they're dedicated to building a lot of muscle.  Should require a lot of effort to maintain.)

Maximal human stat: 20 (Extremely strong.  People who spend their whole lives dedicated to being as strong as possible, and with good genetics too.  Olympic powerlifters, record-setting strongmen, etc.)

Superhuman: >20 (Anything beyond this should require bionics or mutations.)


# Skill system scaling:
Minimum skill: 0 (You have no idea where to even start.  Even following clearly written directions is a challenge because you don't know basic terms and procedures.)

Beginning hobbyist level: 1-2 (You've done this enough that you understand how to do basic things, know the tools that are used, and follow the language.)

Proficient hobbyist level: 3-4 (You've used the tools for a while and they don't feel unfamiliar to you.  Given enough directions you can do most things.)

Early professional level: 5-6 (You've been using these tools a while and know not just how to use them, but how to do some impressive stuff, and some of the more efficient shortcuts and common pitfalls.)

Expert professional level: 7-8 (There's not much you don't know about this stuff and you'd be genuinely impressed if someone knew tricks you don't.)

Master level: 9-10 (While there may be very specific tricks you don't know yet, overall you pretty much have no room for major improvement in this skill.  Sure, you'll continue to get better, but only in subtle ways noticeable to you, not anything major.)


# Monster melee skill scaling:
Minimum skill: 0 (no melee potential; turret, fungal wall)

Nominal skill: 4 (average critter; most zeds & giant insects)

Notable skill: 6 (competent/carnivore; bear, wolf, police/survivor zeds)

Very high skill: 8 (dangerous opponent; dark wyrm, vinebeast)

Maximal skill: 10 (highest for balance purposes; jabberwock, tribot, shoggoth, gracken)


# Monster maximum damage scaling:
Minimum damage: 0 (no damage potential; spore cloud, hallucination)

Nominal damage: 4 (minimal threat; decayed zombie, blank body, cat)

Average damage: 6 (normal day one threat; zombie, wasp)

High damage: 10 (dangerous day one threat; tough zombie, wolf, zombie scientist)

Very high damage: 20+ (zombie predator, super soldier ant, mi-go) 

Maximum damage: 50 (highest for balance purposes; melded task force)


# Monster HP scaling:
Minimum HP: 1 (no ability to absorb damage; yellow chick, mosquito)

Average HP: ~100 (average critter; most basic zeds, slimes, soldier ants, fungaloids & triffids)

Notable HP: ~200 (unusually resilient; tiger, zombie master, mi-go)

Very high HP: ~500 (supernaturally resilient; zombie hulk, shoggoth, triffid heart, jabberwock)

Maximal HP: 800 (highest for balance purposes; wraith)

In general larger creatures should have higher HP as should more evolved blob creatures and alien and nether creatures.


# Speeds:
Zombies are a bit faster than "shambling". Zombified versions of fast critters will remain fast, but in general the process slows the undead version. Further, under no circumstances should a zed be more than 50% faster than base character speed. Currently, this means "capped at 150".


# Dodge System assumptions:
Dodge chance is based on attacker's melee skill and target's dex stat and dodge skill.

Successful dodges negate the attack and impose a cumulative penalty on dodges within the same turn.

## Dodge Use Cases:
An individual with no skill and nominal stats in ideal circumstances against a basic opponent should occasionally be able to dodge.

An individual with no skill and nominal stats in ideal circumstances against a skilled opponent should rarely if ever be able to dodge.

An individual with world-class dodging ability, in ideal circumstances against a basic opponent should have a negligible chance of failure.

An individual with world-class dodging ability, in ideal circumstances against a skilled opponent should have a moderate chance of failure.

The effect of increasing dodge skill has a growth rate with diminishing returns that accelerates sharply at the point where you move beyond the dodge a "regular" character is likely to achieve (7  and above)

The balance of melee versus dodge should favor dodge which, after all, isn't effective against a wide variety of other types of attacks.

Even a world class dodger should not be able to dodge continuously when attacked many times a turn.


# MELEE WEAPONS:

## To-Hit Value
The "to_hit" value of an object represents the base likelihood that it will solidly strike an enemy during an attack. This can then be modified by martial arts, skills, proficiences, etc... to get your final chance to-hit.

For basic objects it isn't important to get a perfect value since it's highly unlikely for players to use that item as a weapon. These items start with a base of -2 and, if you wish, you may go through the categories and manually add to the to-hit value the listed numbers based on the object's characteristics, then enter the final result number directly in the format "to_hit": X, (where X is the positive or negative integer you have decided on).

For proper weapons, such as those in the data\json\items\melee file, and common makeshift weapons like crowbars, etc... we use a slightly different system. Instead of a declared number, we instead use a group of more descriptive words so that we can easily audit and make sure these values are as close to reality as possible. Instead of adding up the numbers below, you simply select the correct word for each category and it will be automatically calculated from the base -2 to-hit number in-game instead.

The format for this is:
"to_hit": { "grip": "(parameter)", "length": "(parameter)", "surface": "(parameter)", "balance": "(parameter)" }

### Grip
Grip is a measure of how well you can control the weapon to quickly respond to situational changes.

-1 - "bad" - Particularly hard to grip items, (especially those that are innately slippery or very rounded with no obvious gripping edge) such as basketballs and barrels, or which are dangerous to hold because of very sharp edges, like scrap metal and broken glass.

+0 - "none" - Any object that doesn't fall into one of the categories below. Examples include 2x4s, computer monitors, wires, stingers and clothing. Basically, anything that has a grippable component, but which is too thick, too thin, or too flimsy to grab comfortably in a way that can reliably control the object.

+1 - "solid" - A weapon with a fairly solid grip, like a pipe, a rock, guitar neck, or pool cue.

+2 - "weapon" - A weapon with a dedicated grip shaped to the hand, like a sword, axe, knife, or police baton, or that is strapped to the body (or is a piece of the body). Fists would get a +2 bonus here, bringing them to "0" total, since none of the others would apply.

### Length
Length allows more surface area for potential contact, and reduces the need to control the positioning of the body to guarantee a hit. It also allows the player to strike from a safer distance, allowing them to worry more about trying to hit without being hit in return, and allows for swings with larger arcs, making dodging such a strike more difficult.

+0 - "hand" - Any object without a length bonus.

+1 - "short" - Objects that, when held, extend over a foot (1/3 of a meter) in length from the hand, but less than about 3 feet. A normal American 12-inch ruler is the handy boundary guide for when an item should switch over to a +1 bonus (the ruler, losing several inches when held, does not get one - unless you added a handle to it!).

+2 - "long" An object that is over 3 feet in length from the point where it is held. Includes swords, spears, quarterstaffs, poles, and a lot of other stuff.

### Striking Surface
Some weapons need to strike in a certain way to be effective. Others are more difficult to use "incorrectly".

-2 - "point" - Single-Point weapons - Picks, spears, syringes. Any weapon that has a single point that must contact the enemy in a specific way in order to deal a decent amount of damage. Also, weapons with difficult attack angles, like scythes, where the damaging part of the weapon is faced away from the enemy.

-1 - "line" - Line of damage weapons - Swords, knives, and other weapons that require a solid strike along a particular piece of the weapon, where the weapon can be said to have an attack angle, fall here. Weapons that have point attacks but are still effective without any solid hit, such as a nailboard, would also fall here.

+0 - "any" - attack-anywhere weapons - Clubs, pipes, maces, etc, where the weapon will be dealing good damage with a solid blow no matter how it is angled, because every surface is effectively a striking surface.

+1 - "every" - Weapons that can still do significant damage even with glancing blows would fall here. Jagged tearing weapons and electric weapons like a stun baton would fall here.

### Balance
A measure of how well-suited the item is for being swung/thrust/etc. This factors in overall balance of the weapon, weight is accounted for separately.

-2 - "clumsy" - Very clumsy or lopsided items ill-suited for swinging or thrusting. Characterized by requiring effort just to hold steady. frying pan or pot, chainsaw, chair, vacuum cleaner.

-1 - "uneven" - Balance of the object is uneven, but in a way that at least doesn't interfere with swinging. axes, sledgehammer, rifle, scythe, most polearms.

+0 - "neutral" - Neutral balance, neither well nor poorly weighted for the typical use. Heavy stick, rock, pool stick, kitchen knives, claw hammer, metal pipe, crowbar, handguns.

+1 - "good" - Well-balanced for swinging or stabbing. Baseball bat, golf club, swords, quarterstaff, knives.

## Damage
Weapon's relative strength is based on an approximate formula involving its damage, to-hit, techniques and few other factors.

### Damage per second
A melee's weapon damage per second (dps) is calculated past armor against a sample group of monsters with a range of dodge and armor values: a soldier zombie (low dodge, high bash and cut armor), a survivor zombie (medium dodge, some bash and cut armor), and a smoker zombie (high dodge, no armor).  This should correctly weigh accuracy, criticals, and damage without over valuing any of them.

In code, this is calculated using the item::effective_dps() function, which takes a character and a monster.  It calculates the relative accuracy of the character and weapon against the monster's defenses and determines the hit rate from a table lookup.  It also determines the number of critical hits.  Number of hits is hit rate * 10,000, and number of misses is 10,000 - number of hits.

For both critical and non-critical hits, average damage is calculated based on the weapon's stats and the user's skill.  Monster armor absorbs the damage, and then the damage is multiplied by the number of hits: either critical hits for the critical hit case, or total hits - critical hits for the non critical hit case.  If the weapon has the rapid strike technique, the total damage is halved, and then the average damage is recalculated, multiplied by 0.66, and absorbed by monster armor again to account for rapid strikes.

Number of moves is calculated as attack speed * ( number of misses + number of non-critical hits + number of critical hits ) for weapons without rapid strike, or attack speed * ( number of misses + number of non-critical hits / 2  + number of critical hits / 2  ) + attack speed / 2 * ( number of non-critical hits / 2  + number of critical hits / 2 ) for weapons without rapid strikes.

Damage per second against a particular monster is total damage * 100 / number of moves (100 for the 100 moves/second).  Overall dps is the average of the dps against the three reference monsters.

### Critical hits
A double critical can occur when a second hit roll is made against 1.5 * the monster's dodge.  Double critical hits have a higher chance of occurring than normal critical hits.  For each hit, the chance of achieving either a double critical hit or a normal critical hit is calculated, and then if a random number is less than the critical chance, the critical occurs.  Both double and normal critical hits have the same effect, but the chance of them occurring is different.

**Note** The critical hit system is stupid and complicated and produces weird results.  Double critical hits should have a chance of occurring when the original hit roll is more than 1 standard deviation above the mean, which is simple and faster to calculate than the current system.

### Other factors
Reach is worth +20% at reach 2, +35% at reach 3.

A weapon that is usable by a known martial art is worth +50%.

### Weapon tiers
Relative value should put the weapon into one of those categories:

<2 - Not weapons. Those items may be pressed into service, but are unlikely to be better than fists. Plastic bottles, rocks, boots.

2-5 - Tools not meant to strike and improvised weapons. Planks, pointy sticks, pipes, hammers.

6-11 - Dangerous tools or crude dedicated weapons. Golf clubs, two-by-swords, wooden spears, knife spears, hatchets, switchblades, tonfas, quarterstaves.

12-15 - Good dedicated weapons or the most dangerous of tools. Wood and fire axes, steel spears, electric carvers, kukris, bokken, machetes, barbed wire bats.

20-35 - Weapons of war, well designed to kill humans. Wakizashis, katanas, broadswords, zweihanders, combat knives, battle axes, war hammers, maces, morningstars.

35+ - Sci-fi stuff. Diamond katanas, monomolecular blades, lightsabers and chainswords.

Specific weapon balancing points:
20 - combat knives
22 - short blades
24 - long blades, short axes, and short flails
26 - two handed blades, long axes, most spears
28 - two handed axes and polearms
30 - combat spears

Improvised weapons generally have about 75% of the value of a real weapon.

## Other melee balancing factors
### Attack speed
Out of two weapons with same dpt, the faster one is generally better.
Faster weapons allow more damage granularity (less overkill), make it less likely to miss a turn (and thus dodge/block recharges) and make positioning easier.
Slower weapons will pierce armor better, but currently most enemies are very lightly armored.

### Damage type
At low skill, piercing damage suffers from scaling and bashing damage from damage limit due to low strength and skill. Cutting damage is not affected.
At high skill, bashing damage is generally the strongest, but still suffers from the damage limit.
Exotic damage types (currently only fire) do not scale with skills or crits.

# RANGE WEAPONS
## Automatic Fire
Guns with automatic fire are balanced around 1-second of cyclic fire, unless the cyclic or practical fire rate is less than 1 every second.  Rates of fire less than 1 shot every second are increased to 2.

## Magazines
### Reload times
The overall balance is that magazines themselves are slow to reload whereas changing a magazine should be fast. For standard box magazines a default `reload_time` of 100 (per round) is appropriate with this value increasing for poor quality or extended magazines. Guns themselves should also specify `reload` of 100 (per magazine) unless their magazines are particularly awkward to reload (eg. ammo belts). The game logic intrinsically handles higher volume magazines consuming more time to attach to a gun so you need not consider this.

### Weight
Increases proportional to capacity and should have a comparable ratio to similar magazines. Consider the base item to be a 10-round .223 factory specification box magazine which has a capacity:weight of 1:10. Increase the ratio markedly for poor quality magazines or more slightly for extended magazines. Smaller calibers should use a lower ratio. The `material` should have some effect, with plastic magazines weighing less.

### Volume
Scaled based upon the capacity relative to the `stack_size` of the ammo. For example 223 has a `stack size` of 20 so for 10 and 30 round magazines the volume would be 1 and 2. Extended magazine should always have larger volume than the standard type and for very large drum magazines consider applying an extra penalty. By default most handgun magazines should be volume 1 and most rifle magazines volume 2. Ammo belts should not specify volume as this will be determined from their length.

### Rarity
Overall balance is that pistol magazines are twice as common as rifle magazines and that for guns that spawn with magazines these are always the standard capacity versions. Consider 9x19mm and .223 to be the defaults with everything else more rare. Some locations have more specific balance requirements:

Location          | Description                                               | With guns | Damaged   | Example
------------------|-----------------------------------------------------------|-----------|-----------|--------------------------
Military site     | Only source of milspec magazines and ammo belts           | Never     | Never     | LW-56, .223 ammo belt
Gun store         | Standard and extended capacity magazines                  | Never     | Never     | STANAG-30, Glock extended
Police armory     | Mostly pistol magazines, especially 9x19mm, never extended| Sometimes | Never     | Glock, MP5 magazine
SWAT truck        | Police or military magazines, occasionally extended       | Sometimes | Rarely    | MP5 extended
Survivor basement | Anything except milspec weighted towards common types     | Often     | Sometimes | Saiga mag, M1911 extended
Military surplus  | Older military magazines that are not current issue       | Never     | Rarely    | M9 mag, STEN magazine
Pawn shop         | Anything except milspec weighted towards unusual calibers | Never     | Rarely    | Makarov mag, AK-74 mag
Everywhere else   | Predominately 9mm and 223. Always with standard magazine  | Often     | Sometimes | Ruger 223 mag, M1911 mag

## Archery damage
Bow damage is based on the momentum achieved in the projectile.  Since arrows and bolts have sharp cutting surfaces, the penetration and therefore damage achieved is based on the projectile's capacity for slicing through tissues.  The arrow has a modifier based on construction, material and design, most critically centered around the effectiveness of the head.  Base damage is calculated from momentum by taking momentum in Slug-foot-seconds, multiplying by 150 and subtracting 32. This was arrived at by taking well-regarded bowhunting guidelines and determining the damage numbers necessary for a kill of various game on a critical hit, see tests/archery_damage_test.cpp for details.

## Ammo stats
The damage (**Dmg**) of firearm ammunition is the square root of a round's muzzle energy in joules (**Energy, J**) rounded to the nearest integer with an arbitrary increase or decrease to account for terminal ballistics. Damage of handloaded ammo is set to 92% (rounded down) of their factory counterparts. A similar system for calculating recoil is planned but not currently being worked on. The figures used to calculate stats and any other relevant information are presented in table below.

Each cartridge also has a Base Barrel Length (**Base Brl**) listed; this determines the damage for the connected guns. A firearm has its damage modifier determined by its real life barrel length; for every three inches between it and the listed baseline here, the gun takes a 1 point bonus or penalty, rounding to the nearest modifier. For example, a .45 ACP gun with a 7 inch barrel would get a +1 bonus (against a baseline of 5 inches).

Ammo ID            | Description                 | Energy, J | Dmg | Base Brl | Applied Modifiers / Comments |
-------------------|-----------------------------|-----------|-----|----------|-------------------------------
.22 CB             | 18gr CB bullet              | 39        | 6   | 7.87in   |                              |
.22LR              | 40gr unjacketed bullet      | 141       | 12  | 6in      |                              |
.22LR FMJ          | 30gr FMJ bullet             | 277       | 17  | 6in      |                              |
.32 ACP            | 60gr JHP bullet             | 218       | 15  | 4in      |                              |
7.62x25mm          | 85gr JHP bullet             | 544       | 23  | 4.7in    |                              |
7.62x25mm Type P   | 120gr bullet                | 245       | 15  | 9.6in    | Fired from the Type 64 SMG; need more data here |
9x18mm 57-N-181S   | 93gr FMJ bullet             | 251       | 16  | 3.8in    |                              |
9x18mm SP-7        | 93gr bullet                 | 417       | 20  | 3.8in    |                              |
9x18mm RG028       | 93gr hardened steel core bullet | 317   | 18  | 3.8in    |          damage reduced by 4 |
9x19mm FMJ         | 115gr FMJ bullet            | 420       | 24  | 5.9in    |                              |
9x19mm JHP         | 115gr JHP bullet            | 533       | 23  | 5.9in    |damage increased by 3         |
9x19mm +P          | 115gr JHP bullet            | 632       | 25  | 5.9in    |                              |
9x19mm +P+         | 115gr JHP bullet            | 678       | 26  | 5.9in    |                              |
.38 Special        | 130gr FMJ bullet            | 256       | 16  | 4in      |                              |
.38 FMJ            | 130gr FMJ bullet            | 256       | 16  | 4in      |                              |
.38 Super          | 147gr JHP bullet            | 660       | 26  | 4in      |                              |
10mm Auto          | 180gr FMJ bullet            | 799       | 28  | 5in      |                              |
.40 S&W            | 135gr JHP bullet            | 575       | 24  | 4in      |                              |
.40 FMJ            | 180gr FMJ bullet            | 598       | 24  | 4in      |                              |
.44 Magnum         | 240gr JHP bullet            | 1570      | 40  | 7.5in    |                              |
.45 ACP JHP        | 185gr JHP bullet            | 614       | 25  | 5in      |                              |
.45 ACP FMJ        | 230gr FMJ bullet            | 447       | 21  | 5in      |                              |
.45 ACP +P         | 200gr JHP bullet            | 702       | 26  | 5in      |                              |
.454 Casull        | 300gr JSP bullet            | 2459      | 50  | 7.5in    |                              |
.45 Colt JHP       | 250gr JHP bullet            | 610       | 25  | 7.5in    |                              |
.500 S&W Magnum    | 500gr bullet                | 3056      | 55  | 8.4in    |                              |
4.6x30mm           | 31gr copper plated steel bullet | 505   | 22  | 7.1in    |        damage reduced by 4   |
5.7x28mm SS190     | 31gr AP FMJ bullet          | 534       | 23  | 10.4in   |        damage reduced by 3   |
7.62x39mm          | 123gr FMJ bullet            | 2179      | 46  | 16.3in   |                              |
7.62x39mm 57-N-231 | 121.9gr steel core FMJ bullet | 2036      | 45  | 16.3in   |                              |
7.62x39mm M67      | 123gr FMJ bullet            | 2141      | 46  | 16.3in   |         TODO                 |
5.45x39mm 7N10     | 56gr FMJ bullet             | 1402      | 37  | 16.3in   |        damage increased by 3 |
5.45x39mm 7N22     | 57gr steel core FMJ bullet  | 1461      | 38  | 16.3in   |                              |
.223 Remington     | 36gr JHP bullet             | 1524      | 39  | 20in     |Uses 5.56 NATO barrel baseline; damage increased by 5 |
5.56x45mm M855A1   | 62gr copper core FMJBT bullet | 1843      | 43  | 20in     |                              |
.300BLK supersonic | 125gr OTM                   | 1840      | 43  | 16in     |
,300BLK subsonic   | 220gr OTM                   | 675       | 26  | 16in     |  subsonic
7.62x54mmR         | 150gr FMJ bullet            | 3629      | 60  | 28in     |                              |
.308 Winchester    | 168gr hollow point bullet   | 3570      | 60  | 24in     |                              |
7.62 NATO M80      | 147gr FMJ bullet            | 3304      | 57  | 24in     |                              |
7.62 NATO M62      | 142gr tracer bullet         | 3232      | 57  | 24in     |  Belt with 1/5 tracer rounds |
.270 Winchester    | 130gr soft point bullet     | 3663      | 61  | 24in     |                              |
.30-06 Springfield | 165gr soft point bullet     | 3894      | 62  | 24in     |        damage increased by 4 |
.30-06 M2          | 165.7gr AP bullet           | 3676      | 60  | 24in     |         damage reduced by 10 |
.30-06 M14A1       | Incendiary ammunition       | 3894      | 62  | 24in     |         damage reduced by 10 |
.45-70 Govt.       | 300gr soft point bullet     | 3867      | 66  | 24in     |        damage increased by 4 |
.300 Winchester Magnum | 220gr JHP bullet        | 5299      | 73  | 24in     |        damage increased by 5 |
.700 NX            | 1000gr JSP bullet           | 12100     | 110 | 28in     |                              |
.50 BMG Ball       | 750gr FMJ-BT bullet         | 17083     | 131 | 45in     |                              |
.50 BMG M33 Ball   | 706.7gr bullet              | 18013     | 134 | 45in     |                              |
.50 BMG M903 SLAP  | 355gr tungsten AP bullet    | 17083     | 131 | 45in     |  Can't be used with M107A1   |
.410 000 shot      | 5 000 pellets               | 1530      | 39  | 18in     |                              |
.70 blunderbuss shot | 400gr lead ball           | 1200      | 41  | 16in     |  Very generous FPS           |

# LIQUIDS:
Multi-charge items are weighed by the charge/use.  If you have an item that contains 40 uses, it'll weigh 40x as much (when found in-game) as you entered in the JSON. Liquids are priced by the 250mL unit, but handled in containers.  This can cause problems if you create something that comes in (say) a gallon jug (15 charges) and price it at the cost of a jug's worth: it'll be 15x as expensive as intended.

To that end, here's a list of containers with non-one volume.  If you have something spawn in 'em, divide the "shelf" price by this value to arrive at the correct price to list in the JSON.

- plastic bottle: 2

- glass jar: 2

- glass bottle: 3

- plastic canteen: 6

- 3L glass jar: 12, as expected

- gallon jug: 15

# Diamond weapons
Diamond weapons should be uniform in their CVD machine requirements.
Coal requirements are `floor((weapon_volume+1)/2)*25`.
Hydrogen requirements are `coal_requirements/2.5`.

# MUTATIONS
Mutations are given completely subjective point values.  The most important factor is that mutations that adversely affect a character are given a negative point value, or positive for beneficial mutations.  The chance of obtaining a positive or negative mutation varies based on Instability (a counter that increases by a default of 100 when a mutation is gained or lost and decays by 1 per in-game day by default).  0 point mutations will always have a 10% chance of appearing.  There is a 90% chance to obtain a good mutation until approximately 800 Instability.  There is an equal chance (45% each) of obtaining a good or bad mutation at approximately 2800 Instability.  There is an approximately 70% chance of obtaining a bad mutation at 10000 Instability, which will be the cap after a current test phase where it is capped at 8000.