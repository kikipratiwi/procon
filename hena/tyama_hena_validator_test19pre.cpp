#include <string>
void test(const std::string &input, const std::string &expect);
void testloader(){ //insert test cases here
/*0*/ test( "3,11,12,102,111,120", "1,10,100" );    
/*1*/ test( "10,20,30,35,70", "many" );    
/*2*/ test( "1,5,20,80", "none" );    
/*3*/ test( "1,2,3,4,5,6,7,8,9,10,11,12,13,14", "many" );    
/*4*/ test( "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15", "1,4,5" );    
/*5*/ test( "1,2,3,4,5,6,7,8,9,10,11,12,13,14,17", "none" );    
/*6*/ test( "1,2,3,4,5,6,7,8,9,10,11,12,13,14,18", "1,4,6" );    
/*7*/ test( "5,6,7,8,9,10,11,12,13,14,15,16", "2,5,6" );    
/*8*/ test( "9,10,11,12,13,14,15,16,17,18,19", "4,5,7" );    
/*9*/ test( "11,36,37,45,55,70,71", "1,10,35" );    
/*10*/ test( "92,93,94,95,96,97,98,99", "30,32,33" );    
/*11*/ test( "95,96,97,98,99,100", "many" );    
/*12*/ test( "27,30,34,37,43,44,46,51,57", "10,17,23" );    
/*13*/ test( "6,10,13,17,65,73,76,80", "none" );    
/*14*/ test( "12,19,21,29,85", "none" );    
/*15*/ test( "1,2,8,10,14,23,58,62,64", "none" );    
/*16*/ test( "4,22,25,31,44,50,58,69,71,72,73,77", "none" );    
/*17*/ test( "8,16,26,27,42,53,65,69,81,83,88,99", "none" );    
/*18*/ test( "9,10,23,24,28,33,38,39,58,68,84", "none" );    
/*19*/ test( "11,16,24,26,88", "none" );    
/*20*/ test( "24,33,47,56,63,66,75,78,89,93", "none" );    
/*21*/ test( "7,26,72,77", "many" );    
/*22*/ test( "69,88,95,97", "many" );    
/*23*/ test( "9,14,48,89", "many" );    
/*24*/ test( "69,76,77,83", "many" );    
/*25*/ test( "11,14,24", "many" );    
/*26*/ test( "8,25,75,93", "many" );    
/*27*/ test( "11,55,93,98,99", "many" );    
/*28*/ test( "71,83,87", "many" );    
/*29*/ test( "22,76,77,92", "7,15,62" );    
/*30*/ test( "33,61,66,83,95", "17,33,61" );    
/*31*/ test( "6,16,49,55,72", "6,16,33" );    
/*32*/ test( "62,85,97,98", "12,25,73" );    
/*33*/ test( "54,60,67,70,72", "20,25,27" );    
/*34*/ test( "54,61,68,84,87", "27,30,34" );    
/*35*/ test( "65,67,69,75,79,89,99", "21,23,33" );    
/*36*/ test( "69,72,80,81,89", "23,24,33" );
/*37*/ test( "1,2,3", "many" );
}
