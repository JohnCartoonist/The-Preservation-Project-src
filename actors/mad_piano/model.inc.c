/**************************************************************/
/*	shape data piano_base_data (skeleton & animation) */
/**************************************************************/

#define ShapeColor_piano_base_data(r,g,b)   ShapeColor(r,g,b)

/*-------------------------------------------------------------*/
/*	light data                                                 */
/*-------------------------------------------------------------*/

static Lights1 light_piano_base_data[]={
	ShapeColor_piano_base_data(20,19,32),
	ShapeColor_piano_base_data(178,178,178),
};

/*-------------------------------------------------------------*/
/*	vertex & polygon data                                      */
/*-------------------------------------------------------------*/

static Vtx vtx_piano_base_data0[]={
	{0,0,-423,0,0,0,0,-127,0,0},
	{162,0,-598,0,0,0,0,-127,0,0},
	{505,0,-598,0,0,0,0,-127,0,0},
	{673,-1,-423,0,0,0,0,-127,0,0},
	{716,-1,-38,0,0,0,0,-127,0,0},
	{917,-2,113,0,0,0,0,-127,0,0},
	{917,-2,492,0,0,0,0,-127,0,0},
	{0,0,492,0,0,0,0,-127,0,0},
	{0,0,492,0,0,0,0,127,0,0},
	{917,-2,492,0,0,0,0,127,0,0},
	{917,-2,113,0,0,0,0,127,0,0},
	{716,-1,-38,0,0,0,0,127,0,0},
	{673,-1,-423,0,0,0,0,127,0,0},
	{505,0,-598,0,0,0,0,127,0,0},
	{162,0,-598,0,0,0,0,127,0,0},
	{0,0,-423,0,0,0,0,127,0,0},
};
static Vtx vtx_piano_base_data1[]={
	{4,9,13,0,0,0,1,-63,109,0},
	{4,-13,0,0,0,0,1,-63,109,0},
	{460,-1,0,0,0,0,1,-63,109,0},
	{4,-13,0,0,0,0,1,-63,-109,0},
	{4,9,-13,0,0,0,1,-63,-109,0},
	{460,-1,0,0,0,0,1,-63,-109,0},
	{4,9,-13,0,0,0,3,127,0,0},
	{4,9,13,0,0,0,3,127,0,0},
	{460,-1,0,0,0,0,3,127,0,0},
};
static Vtx vtx_piano_base_data2[]={
	{548,-437,-75,0,0,0,127,1,0,0},
	{537,480,-75,0,0,0,127,1,0,0},
	{537,480,14,0,0,0,127,1,0,0},
	{548,-437,14,0,0,0,127,1,0,0},
	{377,-439,14,0,0,0,0,0,127,0},
	{548,-437,14,0,0,0,0,0,127,0},
	{537,480,14,0,0,0,0,0,127,0},
	{366,478,14,0,0,0,0,0,127,0},
	{351,-414,36,0,0,0,0,0,127,0},
	{341,452,36,0,0,0,0,0,127,0},
	{-8,449,37,0,0,0,-1,0,127,0},
	{-151,247,30,0,0,0,-1,0,127,0},
	{-529,204,30,0,0,0,0,2,127,0},
	{-691,51,36,0,0,0,0,1,127,0},
	{-687,-272,36,0,0,0,0,0,127,0},
	{-538,-424,36,0,0,0,0,0,127,0},
	{-537,-450,-75,0,0,0,0,0,-127,0},
	{-715,-289,-75,0,0,0,0,0,-127,0},
	{-719,53,-75,0,0,0,0,0,-127,0},
	{-545,223,-75,0,0,0,0,0,-127,0},
	{-161,271,-75,0,0,0,0,0,-127,0},
	{-12,473,-75,0,0,0,0,0,-127,0},
	{366,478,-75,0,0,0,0,0,-127,0},
	{377,-439,-75,0,0,0,0,0,-127,0},
	{366,478,14,0,0,0,-1,127,0,0},
	{366,478,-75,0,0,0,-1,127,0,0},
	{-12,473,-75,0,0,0,-57,113,0,0},
	{-12,473,177,0,0,0,-38,121,0,0},
	{366,478,177,0,0,0,-1,127,0,0},
	{-537,-450,-75,0,0,0,-45,-118,0,0},
	{377,-439,-75,0,0,0,1,-127,0,0},
	{377,-439,14,0,0,0,1,-127,0,0},
	{377,-439,177,0,0,0,1,-127,0,0},
	{-537,-450,177,0,0,0,-60,-111,0,0},
	{-161,271,-75,0,0,0,-64,109,0,0},
	{-161,271,177,0,0,0,-78,99,0,0},
	{-545,223,-75,0,0,0,-55,114,0,0},
	{-545,223,177,0,0,0,-42,119,0,0},
	{-719,53,-75,0,0,0,-117,48,0,0},
	{-715,-289,-75,0,0,0,-115,-52,0,0},
	{-715,-289,177,0,0,0,-122,-34,0,0},
	{-719,53,177,0,0,0,-109,64,0,0},
	{-537,-450,-75,0,0,0,-45,-118,0,0},
	{-537,-450,177,0,0,0,-60,-111,0,0},
	{366,478,14,0,0,0,127,1,0,0},
	{366,478,177,0,0,0,127,1,0,0},
	{377,-439,177,0,0,0,127,1,0,0},
	{377,-439,14,0,0,0,127,1,0,0},
	{366,478,-75,0,0,0,0,0,-127,0},
	{537,480,-75,0,0,0,0,0,-127,0},
	{548,-437,-75,0,0,0,0,0,-127,0},
	{377,-439,-75,0,0,0,0,0,-127,0},
	{377,-439,-75,0,0,0,1,-127,0,0},
	{548,-437,-75,0,0,0,1,-127,0,0},
	{548,-437,14,0,0,0,1,-127,0,0},
	{377,-439,14,0,0,0,1,-127,0,0},
	{-545,223,-75,0,0,0,-55,114,0,0},
	{-719,53,-75,0,0,0,-117,48,0,0},
	{-719,53,177,0,0,0,-109,64,0,0},
	{-545,223,177,0,0,0,-42,119,0,0},
	{366,478,14,0,0,0,-1,127,0,0},
	{537,480,14,0,0,0,-1,127,0,0},
	{537,480,-75,0,0,0,-1,127,0,0},
	{366,478,-75,0,0,0,-1,127,0,0},
	{366,478,177,0,0,0,-124,-1,22,0},
	{341,452,36,0,0,0,-124,-1,22,0},
	{351,-414,36,0,0,0,-124,-1,22,0},
	{377,-439,177,0,0,0,-124,-1,22,0},
	{377,-439,177,0,0,0,-1,124,22,0},
	{351,-414,36,0,0,0,-1,124,22,0},
	{-538,-424,36,0,0,0,31,121,21,0},
	{-537,-450,177,0,0,0,61,108,23,0},
	{-687,-272,36,0,0,0,106,64,24,0},
	{-715,-289,177,0,0,0,119,34,27,0},
	{-691,51,36,0,0,0,120,-31,24,0},
	{-719,53,177,0,0,0,107,-64,23,0},
	{-529,204,30,0,0,0,65,-106,20,0},
	{-545,223,177,0,0,0,41,-118,21,0},
	{-151,247,30,0,0,0,47,-115,21,0},
	{-161,271,177,0,0,0,78,-97,20,0},
	{-8,449,37,0,0,0,75,-100,20,0},
	{-12,473,177,0,0,0,38,-119,22,0},
	{341,452,36,0,0,0,1,-124,22,0},
	{366,478,177,0,0,0,1,-124,22,0},
	{325,-311,-301,0,0,0,-63,107,-22,0},
	{244,-312,-75,0,0,0,-63,107,-22,0},
	{364,-241,-75,0,0,0,-63,107,-22,0},
	{325,-311,-301,0,0,0,-61,-108,-22,0},
	{366,-380,-75,0,0,0,-61,-108,-22,0},
	{244,-312,-75,0,0,0,-61,-108,-22,0},
	{325,-311,-301,0,0,0,124,1,-22,0},
	{364,-241,-75,0,0,0,124,1,-22,0},
	{366,-380,-75,0,0,0,124,1,-22,0},
	{317,349,-301,0,0,0,-63,107,-22,0},
	{237,348,-75,0,0,0,-63,107,-22,0},
	{357,419,-75,0,0,0,-63,107,-22,0},
	{317,349,-301,0,0,0,-61,-108,-22,0},
	{358,280,-75,0,0,0,-61,-108,-22,0},
	{237,348,-75,0,0,0,-61,-108,-22,0},
	{317,349,-301,0,0,0,124,1,-22,0},
	{357,419,-75,0,0,0,124,1,-22,0},
	{358,280,-75,0,0,0,124,1,-22,0},
	{-483,-110,-301,0,0,0,-63,107,-22,0},
	{-564,-111,-75,0,0,0,-63,107,-22,0},
	{-444,-39,-75,0,0,0,-63,107,-22,0},
	{-483,-110,-301,0,0,0,-61,-108,-22,0},
	{-442,-179,-75,0,0,0,-61,-108,-22,0},
	{-564,-111,-75,0,0,0,-61,-108,-22,0},
	{-483,-110,-301,0,0,0,124,1,-22,0},
	{-444,-39,-75,0,0,0,124,1,-22,0},
	{-442,-179,-75,0,0,0,124,1,-22,0},
};
Gfx RCP_piano_base_data0[]={
	gsSPLight((&light_piano_base_data[0].l[0]),1),
	gsSPLight((&light_piano_base_data[0].a),2),
	gsSPVertex(&vtx_piano_base_data0[0],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(0,3,4,0),
	gsSP1Triangle(0,4,5,0),
	gsSP1Triangle(0,5,6,0),
	gsSP1Triangle(0,6,7,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(8,10,11,0),
	gsSP1Triangle(8,11,12,0),
	gsSP1Triangle(8,12,13,0),
	gsSP1Triangle(8,13,14,0),
	gsSP1Triangle(8,14,15,0),
	gsSPEndDisplayList()
};
Gfx RCP_piano_base_data1[]={
	gsSPLight((&light_piano_base_data[0].l[0]),1),
	gsSPLight((&light_piano_base_data[0].a),2),
	gsSPVertex(&vtx_piano_base_data1[0],9,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSPEndDisplayList()
};
Gfx RCP_piano_base_data2[]={
	gsSPLight((&light_piano_base_data[1].l[0]),1),
	gsSPLight((&light_piano_base_data[1].a),2),
	gsSPVertex(&vtx_piano_base_data2[0],8,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(4,6,7,0),
	gsSPLight((&light_piano_base_data[0].l[0]),1),
	gsSPLight((&light_piano_base_data[0].a),2),
	gsSPVertex(&vtx_piano_base_data2[8],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(0,3,4,0),
	gsSP1Triangle(0,4,5,0),
	gsSP1Triangle(0,5,6,0),
	gsSP1Triangle(0,6,7,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(8,10,11,0),
	gsSP1Triangle(8,11,12,0),
	gsSP1Triangle(8,12,13,0),
	gsSP1Triangle(8,13,14,0),
	gsSP1Triangle(8,14,15,0),
	gsSPVertex(&vtx_piano_base_data2[24],14,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(0,3,4,0),
	gsSP1Triangle(5,6,7,0),
	gsSP1Triangle(5,7,8,0),
	gsSP1Triangle(5,8,9,0),
	gsSP1Triangle(2,10,11,0),
	gsSP1Triangle(2,11,3,0),
	gsSP1Triangle(10,12,13,0),
	gsSP1Triangle(10,13,11,0),
	gsSPVertex(&vtx_piano_base_data2[38],14,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(1,4,5,0),
	gsSP1Triangle(1,5,2,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(6,8,9,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(10,12,13,0),
	gsSPVertex(&vtx_piano_base_data2[52],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(4,6,7,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(8,10,11,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(12,14,15,0),
	gsSPVertex(&vtx_piano_base_data2[68],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(3,2,4,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(5,4,6,0),
	gsSP1Triangle(5,6,7,0),
	gsSP1Triangle(7,6,8,0),
	gsSP1Triangle(7,8,9,0),
	gsSP1Triangle(9,8,10,0),
	gsSP1Triangle(9,10,11,0),
	gsSP1Triangle(11,10,12,0),
	gsSP1Triangle(11,12,13,0),
	gsSP1Triangle(13,12,14,0),
	gsSP1Triangle(13,14,15,0),
	gsSPVertex(&vtx_piano_base_data2[84],15,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSP1Triangle(12,13,14,0),
	gsSPVertex(&vtx_piano_base_data2[99],12,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSPEndDisplayList()
};
