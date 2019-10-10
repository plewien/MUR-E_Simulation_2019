#include "__cf_DriveTrain_Modular.h"
#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_kJPMtmWinZ0O7NalTkJ8hF" , 14 ,
518976 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof
( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) ,
sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof (
boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T )
, sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
struct_kJPMtmWinZ0O7NalTkJ8hF ) } ; static const char_T * rtDataTypeNames [ ]
= { "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "struct_kJPMtmWinZ0O7NalTkJ8hF" } ;
static DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB .
av2xxttqir [ 0 ] ) , 0 , 0 , 132 } , { ( char_T * ) ( & rtB . osxfukpdla ) ,
8 , 0 , 2 } , { ( char_T * ) ( & rtDW . ijtyhzdpgc [ 0 ] ) , 0 , 0 , 43 } , {
( char_T * ) ( & rtDW . gla2ikd2o3 ) , 11 , 0 , 20 } , { ( char_T * ) ( &
rtDW . mdwa3ns5ul [ 0 ] ) , 7 , 0 , 6 } , { ( char_T * ) ( & rtDW .
h5of2gf1by [ 0 ] ) , 10 , 0 , 16 } , { ( char_T * ) ( & rtDW . hex3zemleh ) ,
6 , 0 , 1 } , { ( char_T * ) ( & rtDW . mp4psbhe4a ) , 2 , 0 , 7 } , { (
char_T * ) ( & rtDW . ion1jktvgf ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
cy30ynmnz3 ) , 8 , 0 , 4 } } ; static DataTypeTransitionTable rtBTransTable =
{ 10U , rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { {
( char_T * ) ( & rtP . PM ) , 0 , 0 , 65025 } , { ( char_T * ) ( & rtP .
uDLookupTableLq_maxIndex [ 0 ] ) , 7 , 0 , 19 } } ; static
DataTypeTransitionTable rtPTransTable = { 2U , rtPTransitions } ;
