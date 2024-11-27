#include <stdio.h>
#include <grp.h>

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define UNDO "\x1b[0m"

#define BOLD_MAGENTA "\x1b[1;35m"
#define BOLD_GREEN "\x1b[1;32m"
#define BOLD_RED "\x1b[1;31m"
#define BOLD_CYAN "\x1b[1;36m"
#define BOLD_YELLOW "\x1b[01;33m"
#define BOLD_BLUE "\x1b[1;34m"
//int Add(char Tribe[], int Extra, int Extra1,int Extra2){
//if(strcmp(Tribe,"Maniac")==0){
  //Extra+=20;
//}else if(strcmp(Tribe,"Mol")==0){
  //Extra+=30;
//}


//return Extra;
//}
//Weapons: Wizard - Magick Stick.  
//         Warrior - Sword.
//         Ranger - Bow.
char choose3[1];
char choose4[1];
char choose3p[1];
char choose5[1];
char choose6[1];
char choose7[1];
char choose8[1];
char choose9[1];
char choose10[1];
char choose11[1];
char choose12[1];
char choose13[1];
char choose14[1];
char choose15[1];
char choose16[1];
char choose17[1];
struct Potion{
 int amount;

};

struct Values{
int LeatherHealth;
int LeatherMana;
int LeatherArmor;
int LeatherDamage;

int SilverHealth;
int SilverMana;
int SilverArmor;
int SilverDamage;

int GoldenHealth;
int GoldenMana;
int GoldenArmor;
int GoldenDamage;

int LegendaryHealth;
int LegendaryMana;
int LegendaryArmor;
int LegendaryDamage;

};

struct Stats{
int HelmetHealth;
int HelmetMana;
int HelmetArmor;

int ChestHealth;
int ChestMana;
int ChestArmor;

int LeggingsHealth;
int LeggingsMana;
int LeggingsArmor;

int BootsHealth;
int BootsMana;
int BootsArmor;

int WeaponDamage;
int WeaponMana;
};

//NEO: struct gia person------------------------//
struct ArmorPerson{
struct Stats stats;
struct Values value;
char Helmet[55];
char ChestPlatep[55];
char Leggings[55];
char Boots[55];
char Weapon[55];
};

//---------------------------------------------//



struct Armor{
  char name[100];
  int amount;
                          //<------ edw gia alla statistics sta armor

};

struct Weapons{
  char name[100];
  int amount;
  //<-------kai alla statistics

};


struct Monster{
char name[15];
int health;
int damage;
};

//------------------------------------------Functions: //
 void PrintfGraphics();       /**/
 void SearchForLoot();       /**/
 int GoingBackFromBosses();  /**/
 int Splitting();         
 int Map2LevelAndUp();       /**/
 int Bag1();                  
 int Shop();
 int Battles();            /**/
 void PlayerInGeneral();   /**/
 int LeveLShow();           /**/
 int LeveLUpMessage();       /**/
 void GoWest();
 void AfterCheckInput();    /**/
 int AfterCheckOutput();    /**/
 void ArmorPicked();        /* Every time the player kills a monster this function appears after. */
 void TypeAnything();       /* */
 void CleanNewLine();       /* */
 void ValuesOfItems();      /* */
 void OpenToSeeTheStats();  
 void StartingItems();      /* */
 void MapChoice();         
 int GoSouth();
 void AfterBattle();      
 void Print_Clash();        
 void flushInput();        /* */       
 int Credits();
//-------------------------//
void BeforeMonster(char MonsterFile[25], char Name[15],char MonsterName[15],int lineCount,int LeveL, int lineon){
  char Monsterlines[255];
FILE * fM1 = fopen(MonsterFile,"r");
for(int i3=0; i3<lineCount; i3++){
  fgets(Monsterlines,255,fM1);
  printf("                        %s",Monsterlines);
}
printf("\n         %s Appears! ",MonsterName);
if(lineon == 1){
printf("\n        -----------------------------------------------------------");
}
printf("\n\n                        ["BOLD_RED"1"UNDO"] Attack");
printf("\n                        ["BOLD_RED"2"UNDO"] %s",Name);
printf("\n                        ["BOLD_RED"3"UNDO"] LeveL: "BOLD_GREEN"%i"UNDO,LeveL);
}

int GoNorth(int SplitChoice,char Name[15],int Mana,int Health, int Stamina, int Armor, int Damage,int Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int *Gold, char Tribe[],int VarityOfItems, int LeveL, int Split, int *Experiences,int GoBackBattle, int *DONE,char Statics[],struct ArmorPerson *p){
char option,option2;
int pass = 0;
LootAgain:
 printf("\n");
 system("clear");
 PrintfGraphics("North Before-Boss.txt", 22);
 printf("\n\n\n[%s]: Ok..i've come this far just to get here.",Name);
 printf("\n[%s]: That Cave looks creepy..",Name);
 printf("\n\n["BOLD_RED"1"UNDO"] Go Inside");
 printf("\n["BOLD_RED"2"UNDO"] Search For Loot");

Again:
 
 printf("\n> ");
 scanf("\n%c",&option);

 while(option != '2' && option != '1'){
  printf("\n> ");
  scanf("\n%c",&option);   
 }
 
 if(option == '1'){
   system("clear");
   PrintfGraphics("North Before-Boss.txt", 22);
   printf("\n\n *You take a peek inside* ");
   printf("\n");
   sleep(2);
   printf("\n Ok be a man %s! ",Name);
   printf("\n");
   sleep(3);
Againn:
  
   system("clear");
   BeforeMonster("North Boss.txt", Name,"Ghost Boss", 16,  LeveL,1);

Choose: 
   
   printf("\n> "); 
   scanf("\n%c",&option2);

  while(option2 != '1' && option2 != '2' && option2 != '3'){
    printf("\n> "); 
    scanf("\n%c",&option2);
    goto Choose;  
  } 
  
   if(option2 == '1'){
     system("clear");
     Battles(Mana,Health,Stamina,Armor,Damage,"North Boss.txt",16,"Skills.txt",4,&Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,"Ghost North-Boss",300,401,100,LeveL,1);
     if(Result == 0){
      goto LootAgain;
    }
    else if(Result == 1){
      GoingBackFromBosses(&Experiences,&Damage,&Armor,&Mana,&Health,&Large_Health_Potion,1450,2550,&Gold,25);
      sleep(3); 
    }
   }else if(option2 == '2'){
     PlayerInGeneral(Tribe, Name, "Statics.txt", VarityOfItems,  LeveL, Split,  Mana,  Health,  Stamina,  Armor, Damage, &Result,  &Mana_Potion, &Health_Potion, &Large_Mana_Potion, &Large_Health_Potion, &Gold, &Experiences,GoBackBattle,1,p);
     /*char Tribe[], char Name[], char Statics[], int VarityOfItems,int LeveLNow,int Split,int Mana,int Health, int Stamina, int Armor, int Damage,int *Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int *Gold, int *Experiences,int Goback1)*/
     goto Againn;
   }else if(option2 == '3'){
     LeveLShow(&LeveL,LeveL,*Experiences);
     goto Againn;
   }

 }else if(option == '2'){
   SearchForLoot( &Mana_Potion, &Health_Potion,  &Large_Mana_Potion, &Large_Health_Potion,pass);
  pass =+1;
  goto LootAgain;
 }

*DONE += 1;

return *DONE;
}





void GoEast(char Name[],int split){
system("clear");
PrintfGraphics("FootPrints.txt",11);
printf("\n        ---------------------------------------");
printf("\n\n        ["BOLD_RED"Loading"UNDO"]");
printf("\n");
sleep(5);
system("clear");
PrintfGraphics("Aliens.txt", 11);
printf("\n[Alien]: Congratulations ");
sleep(2);
printf("\n[Alien]: You've made it to your destitaion.");
sleep(3);
if (split == 1){
  printf("\n[Alien]: We've captured your friend and wife.");
}else if (split == 0){
  printf("\n[Alien]: We've captured your wife.");
}
  sleep(3);
  printf("\n[Alien]: We are the ones who rule the creatures.");
  sleep(3);
  printf("\n[%s]: Of course..aliens now.",Name);
  sleep(3);
  printf("\n[Alien]: %s why are you isolated in that island?",Name);
  sleep(3);
  printf("\n[%s]: Well..people havent treated me right at all.",Name);
  sleep(3);
  printf("\n[%s]: And i want to go to heaven when i die so..",Name);
  sleep(3);
  printf("\n[%s]: What i did was i went there so i dont hurt anyone.",Name);
  sleep(3);
  printf("\n[%s]: With that being said, i cant go to hell.",Name);
  sleep(3);
  printf("\n[Alien]: Can you name me one thing you did that was good for another person?");
  sleep(3);
  printf("\n[%s]: Well yeah...",Name);
  sleep(4);
  printf("\n[%s]: Ah.. i dont remember",Name);
  sleep(3);
  printf("\n[Alien]: %s Youre dreaming, get up and do something for that. ",Name);
  sleep(3);
  printf("\n[%s]: What?!",Name);
  sleep((float)5.3);
  printf("\n\n");
  sleep(3);
  system("clear");
  PrintfGraphics("end.txt",16);
  printf("[%s]: Oh myy...",Name);
  sleep(3);
  printf("\n");
  sleep(5);
}








void MapUnderLevel1(char Map[],int LeveLNow){
system("clear");
char back[1];
char Lines[255];
FILE * fMap = fopen(Map, "r");
for(int k=0; k<23; k++){
  fgets(Lines,255,fMap);
  printf("%s", Lines);
}

printf("\n\n↠ To explore other areas you must first\n  Upgrade to "ANSI_COLOR_GREEN"level 2."ANSI_COLOR_RESET"");
    printf("\n\n\nType \"b\" to go back."); 
    printf("\n>");
    scanf("%s", back);
    if(back[0] == 'b'){
      goto END;
    }
END:



sleep(1);
}





void AddBag(char Tribe[25],char AddItemWW[35],char AddItemWB[25],char AddItemWG[25] ,char AddItemWaE[25],char AddItemWaF[25],char AddItemWaW[25],char AddItemNR[25],char AddItemNO[25],char AddItemND[25]){
  if(strcmp(Tribe, "WhiteWizard")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemWW);
  fclose(fbag);
  }
 else if(strcmp(Tribe, "BlackWizard")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemWB);
  fclose(fbag);
}
else if(strcmp(Tribe, "GreyWizard")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemWG);
  fclose(fbag);
}
else if(strcmp(Tribe, "RangerNative")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemNR);
  fclose(fbag);

}
else if(strcmp(Tribe, "OcculistNative")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemNO);
  fclose(fbag);

}
else if(strcmp(Tribe, "DefenderNative")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemND);
  fclose(fbag);

}
else if(strcmp(Tribe, "WaterWarrior")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemWaW);
  fclose(fbag);

}
else if(strcmp(Tribe, "FireWarrior")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemWaF);
  fclose(fbag);
}
else if(strcmp(Tribe, "EarthWarrior")==0){
  FILE  *fbag = fopen("Bag.txt", "a");
  fprintf(fbag, "\n%s", AddItemWaF);
  fclose(fbag);
}
}
void Bag (struct ArmorPerson *p){
  printf("\n\n"BOLD_GREEN"[Items]"UNDO" : ");
  printf("\n%s",p->Helmet);
  printf("\n%s",p->ChestPlatep);  
  printf("\n%s",p->Leggings);
  printf("\n%s",p->Boots);
  printf("\n%s",p->Weapon);
}


 

char Characters[10][20] = {
                      {"RangerNative"},
                      {"OcculistNative"},
                      {"DefenderNative"},
                      {"BlackWizard"},
                      {"GreyWizard"},
                      {"WhiteWizard"},
                      {"FireWarrior"},
                      {"EarthWarrior"},
                      {"WaterWarrior"}
                      
};

int NumOfChar[10] = {0, 0, 0, 0, 0, 0 ,0 ,0, 0};






int Bag1();


 void PlayerSelect(char Tribe[], char Name[], char Statics[], int VarityOfItems,int LeveLNow,int Split,int Mana,int Health, int Stamina, int Armor, int Damage,int *Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int Gold){
  char option;
  printf(ANSI_COLOR_GREEN"\nTribe:\n"ANSI_COLOR_RESET);
  printf("%s\n\n",Tribe);
  printf(ANSI_COLOR_GREEN"Name:"ANSI_COLOR_RESET);
  printf("\n%s",Name);
  char Lines[255];
  FILE * fStatics = fopen(Statics, "r");
  for(int k=0; k<10; k++){
    fgets(Lines,255,fStatics);
    printf("%s",Lines);
  }
char enter[1];
      printf("\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &enter[0]);  
      enter[0] = 'a';
  if(enter[0] == 'a'){
  system("clear");
  }
END:


sleep(1);
}
int GoMiddle(int SplitChoice,char Name[15],int *Mana,int *Health, int *Stamina, int *Armor, int *Damage,int Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int *Gold, char Tribe[],int VarityOfItems, int LeveLNow, int Split, int *Experiences,int GoBackBattle, int *DONE,struct ArmorPerson *p,struct Values *v){
Again:
printf("");
char choiceCastle;
int CastleFirst=0;
char option4;
char option5;
char option3;
char option1;
char option;

if(SplitChoice == 0){
  system("clear");
  PrintfGraphics("Forest1.txt", 20);
  
  printf("\n\n↠ [%s]: Ok Josh, we must cross this bridge",Name);
  sleep(3);
  printf("\n\n↠ [%s]: I hardly remember this place.. ",Name);
  sleep(3);
  printf("\n\n↠ [Josh]: Ok %s,im right behind ya!",Name);
  sleep(3);
  printf("\n\n↠ *Walking...*");
  sleep(3);
  printf("\n\n↠ *Street is shaking* ");
  sleep(3);
  printf("\n\n↠ [%s]: OH CRAP! THE BRIGDE!",Name);
  sleep(3);
  printf("\n\n↠ [Josh]: This may collapse at any second, HARRY UP!");
  sleep(3);
  printf("\n\n↠ *You run as fast as possible* ");
  sleep(3);
  printf("\n\n↠ *....*");
  sleep(3);
  printf("\n\n↠ *You step your feet to the other side*");
  sleep(3);
  printf("\n\n↠ [%s]: JOSH HARRY! ITS COLLAPSING MAN ",Name);
  sleep(2);
  printf("\n\n↠ *Josh is nearly there* ");
  sleep(3); 
  printf("\n\n*Bridge falls apart..*");
  sleep(2);
  printf("\n\n↠ [Josh]: NOOOOO!");
  sleep((float)3.2);
  printf("\n\n↠ [%s]: GOD DAMN IT this is a nightmare....",Name);
  sleep((float)2.8); 
  printf("\n\n↠ *You just stare as he falls.. *");
  sleep(3);
  printf("\n\n↠ *You chouldnt save him*");
  sleep(2);
  printf("\n\n");
  sleep(5);
}
printf("\n");
 sleep((float)4.5);
system("clear");
PrintfGraphics("Forest2.txt", 20);

printf("\n↠ New "BOLD_MAGENTA"Quest"UNDO" Added: Kill the " BOLD_GREEN"Forest Boss"UNDO".");

TypeAnything();

PrintfGraphics("Forest2.txt",20);

printf("\n↠ [%s]: Oh, this is going to be a long journey..",Name);
sleep(1);
printf("\n↠ [%s]: I should find a place to take a quick nap..",Name);
printf("\n");
sleep((float)3.5);
printf("\n\n↠ [%s]: Wait a minute..i see a creature.",Name);
Start:
printf("\n");
sleep((float)3.5);
Battle1:
system("clear");
BeforeMonster("Monster M1.txt",Name,"Dragon",15,LeveLNow,0);
printf("\n> ");
scanf("\n%c", &option);
Result = 0;

if(option != '1' && option != '2' && option != '3'){
  goto Battle1;
}
else if(option == '1'){
  Battles(*Mana,*Health,Stamina,*Armor,*Damage,"Monster M1.txt",15,"Skills.txt",4,&Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,"Dragon Level 2",750,100,60,LeveLNow,0);
  if(Result == 0){
    goto Again;
  }
}
else if(option == '2'){
   PlayerInGeneral(Tribe, Name,"Statics.txt", VarityOfItems,  LeveLNow, Split, Mana,  Health,  Stamina,  Armor, Damage, &Result,  Mana_Potion, Health_Potion, Large_Mana_Potion, Large_Health_Potion, Gold, Experiences, GoBackBattle,4,p); 
   goto Battle1;
}
else if(option == '3'){
  LeveLShow(&LeveLNow,LeveLNow,*Experiences);
  goto Battle1;
}
//AFTER BATTLE: (maintentance) //
  if(Result == 1){
    AfterBattle(Result, &Experiences, &Gold, 12 , 900 , p, &Large_Health_Potion, &Large_Mana_Potion, v, Tribe, &Damage, &Health,  &Armor, &Mana, LeveLNow);
}  
system("clear");

PrintfGraphics("Mountains.txt",24);

printf("\n\n↠ [%s]: OK, CREATURES , LEAVE me alone..",Name);
sleep(2);
printf("\n↠ [%s]: Thats enough, i must find a safe place to hide..",Name);
sleep((float)2.5);
printf("\n\n");
sleep((float)4.5);
system("clear");
PrintfGraphics("FootPrints.txt", 11);
printf("\n        ----------------------------------------------------------\n\n");
printf(ANSI_COLOR_RED"↠ Loading.."ANSI_COLOR_RESET);
printf("\n");
printf("");
sleep(6);

system("clear");

PrintfGraphics("Tent.txt", 16);

printf("\n\n\n↠ [%s]: Ohh Myy..An abandoned tent.",Name);
printf("\n↠ [%s]: Thats a miracle.. Thank you God.",Name);
sleep(3);

  printf("\n\nType ["BOLD_RED"n"UNDO"] to Sleep");
  printf("\nType ["BOLD_RED"s"UNDO"] to Search for Items outside.");
  printf("\n");
  sleep((float)2.2);
  printf("\n> ");
  scanf("\n%c", &option4); 
  
  if(option4 == 's'){
    printf("\n\n↠ * "GREEN"Searching..."UNDO"*");
    printf("\n");
    printf("\n");
    sleep(3);
    printf("Found: Large "BLUE"Mana Potion"UNDO"!");
    *Large_Mana_Potion+= 1;
    printf("\n");
    printf("\n");
    sleep(3);
  }else if(option4 == 'n'){ 
    goto No;
  }
No:
system("clear"); 

PrintfGraphics("Night-Night.txt", 8);

printf("\n\n\n                  ["BOLD_GREEN"Sleeping"UNDO"]");
printf("\n");
sleep(6);
//---------------------------------------GOING TO CASTLE:
system("clear");
PrintfGraphics("Forest2.txt", 20);
printf("\n[%s]: Hmm..The end of this direction is near... \n",Name);
sleep(3);
printf("\n");
sleep((float)2.5);
system("clear");
PrintfGraphics("FootPrints.txt",11);
printf("\n        --------------------------------------------------\n\n");
printf("        ["BOLD_RED"Loading"UNDO"]");
printf("\n");
sleep(5);
Castle:
system("clear");

PrintfGraphics("Castle.txt",16);

printf("\n\n[%s]: Ok..It leads me right here..interesting \n",Name);
printf("\n↠ ["BOLD_RED"1"UNDO"] Go Inside ");
printf("\n↠ ["BOLD_RED"2"UNDO"] Search for Loot");
printf("\n> ");
scanf("\n%c",&choiceCastle);
if(choiceCastle == '2' ){
  SearchForLoot(&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,CastleFirst);
  CastleFirst=1;
  goto Castle;
}
else if(choiceCastle == '1' ){ 
    printf("\n\n          ["BOLD_RED"Loading"UNDO"]");  
    printf("\n");
    sleep(4);
    system("clear");
    PrintfGraphics("Castle.txt",16);
    printf("\n\n[Dragon]: Who dares to come in here\n");
    sleep(1);
    printf("\n[Dragon]: Its MY CASTLE now");
    sleep((float)2.8);
    printf("\n");
    sleep(2);
BeforeBattle:  
    system("clear");

    BeforeMonster("Boss Middle.txt",Name,"Forest Boss",16,LeveLNow,0);
    printf("\n> "); 
    scanf("\n%c",&option);

  while(option != '1' && option != '2' && option != '3'){
    printf("\n> "); 
    scanf("\n%c",&option);  
  } 
  if(option == '1'){
    system("clear");
    Battles(*Mana, *Health,*Stamina,*Armor,*Damage,"Boss Middle.txt",16,"Skills.txt",4,&Result,Mana_Potion,Health_Potion, Large_Mana_Potion, Large_Health_Potion, "Forest Boss",760,316,95,LeveLNow,1);


    sleep(3);
    if(Result == 0){
      goto Again;
  }
  else if(Result == 1){
        GoingBackFromBosses(&Experiences,&Damage,&Armor,&Mana,&Health,&Large_Health_Potion,1450,1650,&Gold,25);
  }
    system("clear");
  }
  else if(option == '2'){
     PlayerInGeneral(Tribe, Name,"Statics.txt", VarityOfItems,  LeveLNow, Split, Mana,Health,  Stamina,  Armor, Damage, &Result,  Mana_Potion, Health_Potion, Large_Mana_Potion, Large_Health_Potion, Gold, Experiences, GoBackBattle,4,p); 
     goto BeforeBattle;
  }
  else if(option == '3'){
     LeveLShow(&LeveLNow, LeveLNow,*Experiences);
     goto BeforeBattle;
  }
   
}
    *DONE = 1;

return *DONE;

}

//ΥΠΟΠΡΌΓΡΑΜΜΑ : Μενου //
char Menu(char x, char NameofPlayer[25]){ 
 int true1 = 1;  
PrintfGraphics("Start.txt", 28); 
 printf("\n\n               --------------------------------------------------------------\n");
  printf("                                    ["BOLD_GREEN"1"UNDO"]New Game\n");
  printf("                                    ["BOLD_GREEN"2"UNDO"]Credits\n");
  char linecheck[255];
  
  FILE * Continue = fopen("Progress.txt", "r");
  fgets(linecheck,255, Continue);
  fclose(Continue);

  if(strlen(linecheck) > 2){
    printf("                                    ["BOLD_GREEN"3"UNDO"]Continue\n");
  }
  
  printf("\n\n                                    ["BOLD_GREEN"0"UNDO"]Exit\n");
  printf("\n\n               --------------------------------------------------------------\nType a number and Press \"Enter\" \n>");
  
  
  do{                  
   scanf("\n%c", &x); 
   if(x == '2'){
     Credits();
     true1 = 0;
   }    
   else if(strlen(linecheck) > 2){
    if (x != '1' && x != '2' && x != '0' && x!= '3'){
      printf("Invalid choice\nChoose[\x1b[32m1\x1b[0m] , [\x1b[32m2\x1b[0m] , [\x1b[32m3\x1b[0m] or [\x1b[32m0\x1b[0m] and press ENTER\n");
      true1 = 0; 
    }
    else{
     true1 = 1;

    }
   }else if(strlen(linecheck) <= 2){
    
    if (x != '1' && x != '2' && x != '0' ){
      printf("Invalid choice\nChoose[\x1b[32m1\x1b[0m] , [\x1b[32m2\x1b[0m] or [\x1b[32m0\x1b[0m] and press ENTER\n");
      true1 = 0; 
    }
    else{
     true1 = 1;

    } 
   }



  }while (true1 == 0);

  return x;
  return *NameofPlayer;
}


// ΥΠΟΠΡΌΓΡΑΜΜΑ: ONOMA - PAIXTH //

char onoma(char paixthsOnoma[25]){
//printf("\n         .-'-.\n");
//printf("       /`     |__\n");
//printf("     /`  _.--`-,-`\n");
//printf("     '-|`   a  a   []\n");
//printf("       \\     _\\__) \\=`\n");
//printf("        C_  `    ,_/\n");
//printf("          | ;----' \n");
system("clear");
PrintfGraphics("Start Name.txt", 13);
printf("\n\n               --------------------------------------------------------------------------------\n");
system("setterm -bold on");
printf("\n                   ↣  ["BOLD_MAGENTA " Welcome Player "UNDO "]");
system("setterm -bold on");
printf("\n                   ↣" BOLD_MAGENTA "  Type your character's name:  "UNDO );
system("setterm -bold on");
scanf("%s", paixthsOnoma);
flushInput();
system("setterm -bold off");
sleep(1);
system("clear");
PrintfGraphics("Start Name.txt",13);
printf("\n\n               --------------------------------------------------------------------------------\n");
if(paixthsOnoma[0] >=97 && paixthsOnoma[0] <=122){
  paixthsOnoma[0] -= 32; 
} 
system("setterm -bold on");
printf("\n\n\n               ↠  %s, your journey begins right here, you are getting out of your confy chair to travel\n                 miles and miles away from your island to find supply... \n ", paixthsOnoma);
 system("setterm -bold off");
 char enter[1];

  
TypeAnything();
 
 
 return *paixthsOnoma;
}
//ΥΠΟΠΡΌΓΡΑΜΜΑ: ΚΑΡΑΒΙ ΠΟΥ ΦΕΥΓΕΙ.//
 int karabifeygei(){

  PrintfGraphics("Start Boat.txt",11);
 printf("\n\n               --------------------------------------------------------------------\n");
  printf("\n\n                ↠ ["BOLD_RED"Traveling"UNDO"] \n"ANSI_COLOR_RESET);
  sleep(7);
 
 return 0;
 };
 

//ΥΠΟΠΡΌΓΡΑΜΜΑ:ΓΙΑ ΤΑ CREDITS//
int Credits(){

  system("setterm -bold on");
  printf("\n\n- Giannis PLP");
  printf("\n- Iraklis PLP");

  printf("\n\n");

  return 0;
}


//ΥΠΟΠΡΌΓΡΑΜΜΑ ΕΙΣΟΔΟΣ (ΕΠΙΛΟΓΕΣ) //
  int epilogesArxh(char paixthsOnoma1[25]){
  system("clear");
  char enter[1];
  int option;
  PrintfGraphics("Start House.txt",15);
  printf("\n\n               ---------------------------------------------------------------------------\n");
  printf("\n\n\n↠ You managed to sail safely.. " );
 
  printf("\n↠ Into the forest you go, you suddendly find a villager's house.. ");
  sleep(2); 
  printf("\n\n ["ANSI_COLOR_RED"1"ANSI_COLOR_RESET "] Knock");
  sleep((float)3.8);
  printf("\n ["ANSI_COLOR_RED"2"ANSI_COLOR_RESET "] Peek through Window");
  printf("\n ["ANSI_COLOR_RED"3"ANSI_COLOR_RESET "] Keep going..");
  printf("\n\n> ");
  scanf("\n%i", &option);

  while(option != 1 && option != 2 && option != 3 ){
   system("clear");
   PrintfGraphics("Start House.txt",15);
  printf("\n\n               --------------------------------------------------------------------------\n");  
  printf("\n\n\n↠ You managed to sail safely.. " );
  printf("\n↠ Into the forest you go, you suddendly find a villager's house.. ");
  printf("");
  sleep(2);
  printf("\n\n ["BOLD_RED"1"UNDO"] Knock");
  sleep(3);
  printf("\n ["BOLD_RED"2"UNDO"] Peek through Window");
  printf("\n ["BOLD_RED"3"UNDO"] Keep going..");
  printf("\n\n> ");
  scanf("\n%i", &option);  
  }
  if(option == 1){
 OPTION1:  
    system("clear");
    
  PrintfGraphics("Start House.txt",15);
  
  printf("\n\n\n               ↠ *You hear someone "ANSI_COLOR_RED"screaming"ANSI_COLOR_RESET"..* ");
  printf("\n");
  sleep(3);
  printf("\n               ↠ Guy: \"GET AWAY FROM ME!\"\n");
  sleep(3);
  printf("\n               ↠ *In shock you take a step back....*\n");
  sleep(2);
  printf("               ↠ *That voice sounds familiar to you..*\n");
  sleep(2);
  printf("\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &enter[0]); 
      enter[0] = 'a';
  if(enter[0] == 'a'){
    system("clear");
  }
  PrintfGraphics("Start House.txt",15);
  printf("\n\n               ↠ [%s]: \"Blacksmith.. IS THAT YOU?\"", paixthsOnoma1);
  printf("\n");
  sleep(3);
  printf("\n\n               ↠ [Blacksmith]: \"%s!? , GET INSIDE QUICK!\"", paixthsOnoma1);
  printf("\n");
  sleep(5);
  printf("\n               -------------------------------------------------------");
  printf("\n\n               ↠ *Blacksmith is the guy that provides you with clothes everytime you come here* ");
  printf("\n\n               ↠ *He's trust-worthy..*");
  printf("\n               -------------------------------------------------------");
  char enter1[1];
  printf("\n\n> Type [Anything] to Continue: ");
  scanf("\n%c", &enter1[0]); 
  enter[0] = 'a';
  if(enter[0] == 'a'){
    system("clear");
  }
  PrintfGraphics("BlackSmith.txt", 16); 
  printf("\n\n\n\n     ↠ [Blacksmith]: %s, Monsters have taken over the whole village,\n                     i managed to come back in my house, but, %s..\n                     im loosing a lot of blood..I've been attacked..", paixthsOnoma1, paixthsOnoma1);

  printf("\n");
  sleep(2);
  printf("\n     [%s]: What is going on?!?", paixthsOnoma1);
  printf("\n\n");
  sleep(6);
  
  printf("     ↠ [Blacksmith]: For your own safety..Please go to my basement and wear whatever armour you want.. \n                     ive crafted them just in case.");
  printf("\n\n");
  sleep((float)3.5);
  printf("     ↠ [%s]: OK..", paixthsOnoma1 );
  printf("\n\n");
  printf("\n\n");
  sleep(4);

  
  goto END1;
  
  }

  if(option == 2){
    system("clear");
    PrintfGraphics("Start House.txt",15);
  
    printf("\n               ↠ *Peeking* ..");
    printf("\n");
    sleep(3);
    printf("\n\n               ↠ [%s]: I cant see much..",paixthsOnoma1);
    printf("\n");
    sleep(3);
    system("clear");
    PrintfGraphics("Start House.txt",15);
   int option1;
    printf("\n\n ["ANSI_COLOR_RED"1"ANSI_COLOR_RESET "] Knock");
    printf("\n ["ANSI_COLOR_RED"3"ANSI_COLOR_RESET "] Keep going..");
    printf("\n\n> ");
    scanf("\n%i", &option1);  
  if(option1 == 1){
    goto OPTION1;
 }
 else if(option1 ==3){
 OPTION3:  system("clear");
  PrintfGraphics("Start House.txt",15);
  printf("\n\n               ↠ *....*");
  printf("\n");
  sleep(3);
  printf("\n               ↠ HEY, %s , STOP PLEASE ", paixthsOnoma1);
  printf("\n");
  sleep(3);
  printf("\n               ↠ Get inside QUICK!");
  printf("\n");
  sleep(3);
  printf("\n\n               ↠ [%s]: Blacksmith is that you??", paixthsOnoma1);
  printf("\n");
  sleep(3);
  printf("\n               -------------------------------------------------------");
  printf("\n\n               ↠ *Blacksmith is the guy that provides you with clothes everytime you come here* ");
  printf("\n\n               ↠ *He's trust-worthy..*");
  printf("\n               -------------------------------------------------------");
  TypeAnything();

  PrintfGraphics("BlackSmith.txt", 16);
  printf("\n\n\n\n     ↠ [Blacksmith]: %s, Monsters have taken over the whole village, i managed to come back in my house, but, %s..\n                     im loosing a lot of blood..I've been attacked..", paixthsOnoma1, paixthsOnoma1);
  printf("\n");
  sleep(1);
  printf("\n     ↠ [%s]: What is going on?!?", paixthsOnoma1);
  printf("\n\n");
  sleep(6);
  printf("\n\n     ↠ [Blacksmith]: For your own safety..Please go to my basement and wear whatever armour you want..\n                     ive crafted them just in case.");
  printf("");
  sleep(4);
  printf("\n\n     ↠ [%s]: OK..", paixthsOnoma1);
  printf("");
  sleep(4);
  printf("\n\n\n");
  sleep(4);
  
 
  
  
 }
   
  } else if(option == 3){
    goto OPTION3;
  }  
END1:

  

  return 0;
}




char fylh(char paixthsOnoma1[25], char TRIBE[20]){
printf("\n");
char GENDER[25];
int fylh1;
char choose1[1];
int clash2;
system("clear");
printf("\n\n----------------------------------------------------");
printf("\n\n                           ,  \n");
printf("                           /:\\\n");
printf("                           >:<\n");
printf("                           >:<\n");
printf("                           >:<\n");
printf("                      ,,,,,\\:/\n");
printf("                     #########\n");
printf("                    //////\\\\\"\n");
printf("                   // /_\\ /_\\ \\\n");
printf("                   \(  0 _ 0  )/\n");
printf("                   /\\=  _\\ =//\"\n");
printf("                   \\/\\ --- /\\//\n");
printf("                   //\\'---' /\\\n");
printf("                   \\//       \\/\n");
printf("                   /\\       //\"\n");
printf("                   \\/       \\//\n");
printf("                   #         #");
printf("                   "         "");
printf("\n\n----------------------------------------------------");
char enter5[1];
printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Tribe"ANSI_COLOR_RESET"]\n");
printf("\n\n↠ ["ANSI_COLOR_GREEN"Native American"ANSI_COLOR_RESET"]");
printf("\n\n> Type [Anything] to Continue: ");
  scanf("\n%c", &enter5[0]); 
  system("clear");
  enter5[0] = 'a';
  if(enter5[0] == 'a'){
NATIVE:    
    printf("\n\n----------------------------------------------------");
printf("\n\n                           ,  \n");
printf("                           /:\\\n");
printf("                           >:<\n");
printf("                           >:<\n");
printf("                           >:<\n");
printf("                      ,,,,,\\:/\n");
printf("                     #########\n");
printf("                    //////\\\\\"\n");
printf("                   // /_\\ /_\\ \\\n");
printf("                   \(  0 _ 0  )/\n");
printf("                   /\\=  _\\ =//\"\n");
printf("                   \\/\\ --- /\\//\n");
printf("                   //\\'---' /\\\n");
printf("                   \\//       \\/\n");
printf("                   /\\       //\"\n");
printf("                   \\/       \\//\n");
printf("                   #         #");
printf("                   "         "");
printf("\n\n----------------------------------------------------");
printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Tribe"ANSI_COLOR_RESET"]\n");
printf("\n\n↠ ["ANSI_COLOR_GREEN"Native American"ANSI_COLOR_RESET"]");
system("setterm -bold on");
printf("\n\nNative American Tribe is the tribe with the most Stamina,"); 
system("setterm -bold on");
printf("\nthey've learned very well how to use their abilities at"); 
system("setterm -bold on");
printf("\nthe right time");
system("setterm -bold on"); 
printf(" and effected at the same time.");
sleep(1);
system("setterm -bold on");
printf("\n\n↠ Health: 550");
system("setterm -bold on");
printf("\n↠ Armor: 20");
system("setterm -bold on");
printf("\n↠ Damage: 45");
system("setterm -bold on");
printf("\n↠ Mana: 320");
system("setterm -bold on");
printf("\n↠ Potision: 75%% ");
system("setterm -bold on");
printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
system("setterm -bold off");
printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
printf("\n\n> ");
scanf("\n%c", &choose1[0]);

CHOOSING_CLASH:
if(choose1[0] == 'y'){
  char choose2[1];
  fylh1 = 1;
  system("clear");
  char line[255];
  FILE *fileNative = fopen("native american.txt", "r");
  for(int i=0; i < 18; i++){
  fgets(line, 255, fileNative);
  printf("%s", line);
 
} 
  PrintfGraphics("native american.txt", 18);   
  printf("\n\n----------------------------------------------------");
  printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
  system("setterm -bold on");
  printf("\n\n↠ ["ANSI_COLOR_GREEN"Ranger Native American"ANSI_COLOR_RESET"]");
  system("setterm -bold on");
  
 
 Print_Clash("Rangers.txt","1");
 /* FILE * fileRanger = fopen("Rangers.txt","r");
  for(int j = 0; j < 70; j++){
    char c = fgetc(fileRanger);
    if(c == '1'){
      c = fgetc(fileRanger);
      assert(c == '#');
      while('c' != '#'){ 
        c = fgetc(fileRanger);  
        printf("%c",c);
      }
    
    }
  
  }*/
  
  printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
 printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
 printf("\n\n> ");
 scanf("\n%c", &choose2[0]);
 
 if(choose2[0] == 'y'){
   NumOfChar[0] = 1;
   goto END_FILH_CLASH;
 }
 else if(choose2[0] == 'n'){
    printf("\n ");
    system("clear");
    FILE *fileNative = fopen("native american.txt", "r");
    for(int j=0; j < 18; j++){
    fgets(line, 255, fileNative);
    printf("%s", line);  

 }
  printf("\n\n----------------------------------------------------");
  
   printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
   system("setterm -bold on");
  printf("\n\n↠ ["ANSI_COLOR_GREEN"Occulist Native American"ANSI_COLOR_RESET"]");
  system("setterm -bold on");
  Print_Clash("Rangers.txt","2");

 
  printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
  printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
  printf("\n\n> ");
  scanf("\n%c", &choose3[0]);



 }
 if(choose3[0] == 'y'){
    NumOfChar[1] = 1;
   goto END_FILH_CLASH;

  } else if(choose3[0] == 'n'){
    printf("\n ");
    system("clear");
    FILE *fileNative = fopen("native american.txt", "r");
    for(int i=0; i < 18; i++){
    fgets(line, 255, fileNative);
    printf("%s", line);
    }  
     printf("\n\n----------------------------------------------------");
    printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
    system("setterm -bold on");
    printf("\n\n↠ ["ANSI_COLOR_GREEN"Defender Native American"ANSI_COLOR_RESET"]");
    system("setterm -bold on");
    Print_Clash("Rangers.txt","3");
     
   printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
   printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
   printf("\n\n> ");
   scanf("\n%c", &choose4[0]);

   if(choose4[0] == 'y'){
      NumOfChar[2] = 1;
     goto END_FILH_CLASH; 
   }
   else if(choose4[0] == 'n'){
     goto CHOOSING_CLASH;
   }

  }

  }else if(choose1[0] == 'n' ){
    system("clear");
    char line1[255];
    PrintfGraphics("Wizard.txt", 21);
    printf("\n\n    -------------------------------------------------------------------------------------------\n");
    printf("\n                ↠ ["ANSI_COLOR_GREEN"Pick Your Tribe"ANSI_COLOR_RESET"]\n");
    system("setterm -bold on");
    printf("\n\n                ↠ ["ANSI_COLOR_GREEN"Wizard Tribe"""ANSI_COLOR_RESET"");
    system("setterm -bold on");
    printf("] \n"); 
    system("setterm -bold on");
    
   PrintfGraphics("Wizard text.txt", 5);
   sleep((float)2.5);
    printf("\n\n");
    PrintfGraphics("Wizard stats.txt", 5);
   printf("\n\n         Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
   printf("\n\n         ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
   printf("\n\n> ");
   scanf("\n%c", &choose5[0]);
  
   if(choose5[0] == 'n'){
     goto WARRIORS;
   }
    else if(choose5[0] == 'y'){
    CLASH_MAGIC:
    system("clear");
    PrintfGraphics("Wizard.txt", 21);
     printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
     system("setterm -bold on");
     printf("\n\n↠ ["ANSI_COLOR_GREEN"Black-Magic Wizard""");
     system("setterm -bold on");
     printf(""ANSI_COLOR_RESET"] \n"); 
     system("setterm -bold on");
    Print_Clash("Wizards.txt", "1");
     printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
     system("setterm -bold off");
     printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
     printf("\n\n> ");
     scanf("\n%c", &choose6[0]);
     if(choose6[0] == 'y'){
       NumOfChar[3] = 1;
       goto END_FILH_CLASH;
     }else if(choose6[0] == 'n'){
      
      system("clear");
      
      PrintfGraphics("Wizard.txt", 21);;
      printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
      system("setterm -bold on");
      printf("\n\n↠ ["ANSI_COLOR_GREEN"Grey-Magic Wizard""");
      system("setterm -bold on");
      printf(""ANSI_COLOR_RESET"] \n"); 
      Print_Clash("Wizards.txt", "2");
      system("setterm -bold off");
      printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
      system("setterm -bold off");
      printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
      printf("\n\n> ");
      scanf("\n%c", &choose7[0]);
    if(choose7[0] == 'y'){
      NumOfChar[4] = 1;
      goto END_FILH_CLASH;
    }else if(choose7[0] == 'n'){
      system("clear");
      PrintfGraphics("Wizard.txt", 21);
      printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
      system("setterm -bold on");
      printf("\n\n↠ ["ANSI_COLOR_GREEN"White-Magic Wizard""");
      system("setterm -bold on");
      printf(""ANSI_COLOR_RESET"] \n"); 
    Print_Clash("Wizards.txt", "3");
      system("setterm -bold off");
      printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
      system("setterm -bold off");
      printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
      printf("\n\n> ");
      scanf("\n%c", &choose8[0]);
      
    if(choose8[0] == 'y'){
      NumOfChar[5] = 1;
      goto END_FILH_CLASH;
    }else if(choose7[0] == 'n'){
     goto CLASH_MAGIC;
  }  
      

    
    }

    }
     }
   
   
     }
   

   
WARRIORS:

  system("clear");
  char line6[255];
  FILE *fileWizard6 = fopen("Warriors.txt", "r");
  for(int i=0; i < 20; i++){
  fgets(line6, 255, fileWizard6);
  printf("%s", line6);
  }  
   printf("\n\n----------------------------------------------------");
    printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Tribe"ANSI_COLOR_RESET"]\n");
    system("setterm -bold on");
    printf("\n\n↠ ["ANSI_COLOR_GREEN"Warriors Tribe"""ANSI_COLOR_RESET"");
    system("setterm -bold on");
    printf("] \n"); 
    system("setterm -bold on");
    
  char line7[255];
  FILE *fileWarriors7 = fopen("Warriors text.txt", "r");
  for(int i=0; i < 5; i++){
  fgets(line7, 255, fileWarriors7);
  printf("%s", line7);
  system("setterm -bold on");
  }
  char line8[255];
  printf("\n\n");
  FILE *fileWarriors8 = fopen("Warriors stats.txt", "r");
  for(int i=0; i < 5; i++){
  fgets(line8, 255, fileWarriors8);
  printf("%s", line8);
  system("setterm -bold on");
  }
  printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
  system("setterm -bold off");
  printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
  printf("\n\n> ");
  scanf("\n%c", &choose9[0]);

  if(choose9[0] == 'y'){
  FIRE_WARRIOR:
  system("clear");
  char line8[255];
  FILE *fileWarriors8 = fopen("Warriors.txt", "r");
  for(int i=0; i < 20; i++){
  fgets(line8, 255, fileWarriors8);
  printf("%s", line8);
  system("setterm -bold on");
  }
  printf("\n\n----------------------------------------------------");
  printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
     system("setterm -bold on");
     printf("\n\n↠ ["ANSI_COLOR_GREEN"Fire Warrior"""ANSI_COLOR_RESET"");
     system("setterm -bold on");
     printf("] \n"); 
     system("setterm -bold on");
     Print_Clash("Knights.txt", "1");
    
     printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
     system("setterm -bold off");
     printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
     printf("\n\n> ");
     scanf("\n%c", &choose10[0]);

     if(choose10[0] == 'y'){
       NumOfChar[6] = 1;
       goto END_FILH_CLASH;
     }
     else if(choose10[0] == 'n'){
      system("clear");
      char line12[255];
      FILE *fileWarriors12 = fopen("Warriors.txt", "r");
      for(int i=0; i < 20; i++){
      fgets(line12, 255, fileWarriors12);
      printf("%s", line12);
      system("setterm -bold on");
     }
     printf("\n\n----------------------------------------------------");
      printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
      system("setterm -bold on");
      printf("\n\n↠ ["ANSI_COLOR_GREEN"Earth Warrior"""ANSI_COLOR_RESET"");
     system("setterm -bold on");
     printf("] \n"); 
     
    system("setterm -bold on");
    Print_Clash("Knights.txt", "3");
    
    printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
    system("setterm -bold off");
    printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
    printf("\n\n> ");
     scanf("\n%c", &choose11[0]);

  }
  if(choose11[0] == 'y'){
     NumOfChar[7] = 1;
    goto END_FILH_CLASH;
  } 
  else if(choose11[0] == 'n'){
   system("clear");
      char line13[255];
      FILE *fileWarriors13 = fopen("Warriors.txt", "r");
      for(int i=0; i < 20; i++){
      fgets(line13, 255, fileWarriors13);
      printf("%s", line13);
      system("setterm -bold on");
     }
     printf("\n\n----------------------------------------------------");
      printf("\n↠ ["ANSI_COLOR_GREEN"Pick Your Clash"ANSI_COLOR_RESET"]\n");
      system("setterm -bold on");
      printf("\n\n↠ ["ANSI_COLOR_GREEN"Water Warrior"""ANSI_COLOR_RESET"");
      system("setterm -bold on");
      printf("] \n"); 

    Print_Clash("Knights.txt", "2");
    
    printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
    system("setterm -bold off");
    printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
    printf("\n\n> ");
     scanf("\n%c", &choose11[0]);
  }
   if(choose11[0] == 'y'){
      NumOfChar[8] = 1;
     goto END_FILH_CLASH;
   } else if(choose11[0] == 'n'){
     goto  FIRE_WARRIOR;
   }



  }
  else if(choose9[0] == 'n'){
    system("clear");
    goto NATIVE;
  }
      
 
  
  
printf("\n");
printf("\n");
END_FILH_CLASH:
system("clear");
for(int ch =0; ch < 9; ch++){
  if(NumOfChar[ch] == 1){
    FILE * fTribe = fopen("TRIBE.txt", "w");

    fprintf(fTribe, Characters[ch], "\n");
    
    fclose(fTribe);

   strcpy(TRIBE, Characters[ch]);
   char *tribeYe  = Characters[ch]; 
   
   GENDER_MALE:
   if(strcmp(tribeYe, "RangerNative")==0 || strcmp(tribeYe, "OcculistNative")==0 || strcmp(tribeYe, "DefenderNative")==0){
     char TRIBE[] = "Native American";
     char line1Ye[255];
     FILE *f1 = fopen("Native American Boy.txt", "r");  
     for(int f =0 ; f < 13; f++){
       fgets(line1Ye, 255, f1);
       printf("%s", line1Ye);
       system("setterm - bold on");
     }
     printf("\n\n----------------------------------------------------");
     printf("\n["ANSI_COLOR_GREEN"Gender"ANSI_COLOR_RESET"]");
     printf("\n\n["ANSI_COLOR_GREEN"Male"ANSI_COLOR_RESET"]");
     printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
    system("setterm -bold off");
    printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
    printf("\n\n> ");
    scanf("\n%c", &choose12[0]);
   
    if(choose12[0] == 'y'){
       strcpy(GENDER,"Male");
      goto END;
    }
    else if(choose12[0] == 'n'){
      system("clear");
      char line2Ye[255];
      FILE *f2 = fopen("native american.txt", "r");  
      for(int f1 =0 ; f1 < 18; f1++){
       fgets(line2Ye, 255, f2);
       printf("%s", line2Ye);
       system("setterm - bold on");
     }
       printf("\n\n----------------------------------------------------");
       printf("\n["ANSI_COLOR_GREEN"Gender"ANSI_COLOR_RESET"]");
       printf("\n\n["ANSI_COLOR_GREEN"Female"ANSI_COLOR_RESET"]");
       printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
       system("setterm -bold off");
       printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
       printf("\n\n> ");
       scanf("\n%c", &choose13[0]);
       if(choose13[0] == 'y'){
         strcpy(GENDER,"Female");
         goto END;
       }
      else if(choose13[0]== 'n'){
        system("clear");
        goto GENDER_MALE;
      }
    }

  }
  else if(strcmp(tribeYe, "BlackWizard")==0 || strcmp(tribeYe,"GreyWizard")== 0 || strcmp(tribeYe, "WhiteWizard")==0){
    GENDER_MALE_WIZARDS:
      system("clear");
      char line3Ye[255];
      FILE *f3 = fopen("Wizards - man.txt", "r");  
      for(int f2 =0 ; f2 < 19; f2++){
       fgets(line3Ye, 255, f3);
       printf("%s", line3Ye);
       system("setterm - bold on");
     }
     printf("\n\n----------------------------------------------------");
     printf("\n["ANSI_COLOR_GREEN"Gender"ANSI_COLOR_RESET"]");
     printf("\n\n["ANSI_COLOR_GREEN"Male"ANSI_COLOR_RESET"]");
     printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
    system("setterm -bold off");
    printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
    printf("\n\n> ");
    scanf("\n%c", &choose14[0]);
   
    if(choose14[0] == 'y'){
       strcpy(GENDER,"Male");
      goto END;
    }
    else if(choose14[0] == 'n'){
      system("clear");
      char line4Ye[255];
      FILE *f4 = fopen("Wizards - woman.txt", "r");  
      for(int f3 =0 ; f3 < 16; f3++){
       fgets(line4Ye, 255, f4);
       printf("%s", line4Ye);
       system("setterm - bold on");
     }
       printf("\n\n----------------------------------------------------");
       printf("\n["ANSI_COLOR_GREEN"Gender"ANSI_COLOR_RESET"]");
       printf("\n\n["ANSI_COLOR_GREEN"Female"ANSI_COLOR_RESET"]");
       printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
       system("setterm -bold off");
       printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
       printf("\n\n> ");
       scanf("\n%c", &choose15[0]);
       if(choose15[0] == 'y'){
        strcpy(GENDER,"Female");
         goto END;
       }
      else if(choose15[0]== 'n'){
        system("clear");
        goto GENDER_MALE_WIZARDS;
      }
  }
  
  
  } else if(strcmp(tribeYe, "EarthWarrior")==0 || strcmp(tribeYe,"WaterWarrior")== 0 || strcmp(tribeYe, "FireWarrior")==0){
    GENDER_MALE_WARRIORS:
     system("clear");
      char line8Ye[255];
      FILE *f8 = fopen("Knights - man.txt", "r");  
      for(int f7 =0 ; f7 < 19; f7++){
       fgets(line8Ye, 255, f8);
       printf("%s", line8Ye);
       system("setterm - bold on");
     }
     printf("\n\n----------------------------------------------------");
     printf("\n["ANSI_COLOR_GREEN"Gender"ANSI_COLOR_RESET"]");
     printf("\n\n["ANSI_COLOR_GREEN"Male"ANSI_COLOR_RESET"]");
     printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
    system("setterm -bold off");
    printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
    printf("\n\n> ");
    scanf("\n%c", &choose16[0]);
   
    if(choose16[0] == 'y'){
       strcpy(GENDER,"Male");
      goto END;
    }
    else if(choose16[0] == 'n'){
      system("clear");
      char line10Ye[255];
      FILE *f10 = fopen("Knights - woman.txt", "r");  
      for(int f9 =0 ; f9 < 16; f9++){
       fgets(line10Ye, 255, f10);
       printf("%s", line10Ye);
       system("setterm - bold on");
     }
       printf("\n\n----------------------------------------------------");
       printf("\n["ANSI_COLOR_GREEN"Gender"ANSI_COLOR_RESET"]");
       printf("\n\n["ANSI_COLOR_GREEN"Female"ANSI_COLOR_RESET"]");
       printf("\n\n Type: ["ANSI_COLOR_GREEN"y"ANSI_COLOR_RESET"] to"ANSI_COLOR_GREEN" Confirm."ANSI_COLOR_RESET"");
       system("setterm -bold off");
       printf("\n\n ["ANSI_COLOR_GREEN"Next"ANSI_COLOR_RESET"] ["ANSI_COLOR_GREEN"Type \"n\""ANSI_COLOR_RESET"]");
       printf("\n\n> ");
       scanf("\n%c", &choose17[0]);
       if(choose17[0] == 'y'){
         strcpy(GENDER,"Female");
         goto END;
       }
      else if(choose17[0]== 'n'){
        system("clear");
        goto GENDER_MALE_WARRIORS;
      } 
  }
}
 
}

}
//GENDER//
     
   }






END:
printf("");

FILE * fGEN = fopen("GENDER.txt", "w");
    fprintf(fGEN,"%s", GENDER);
    fclose(fGEN); 
   

//sleep(5500);




return *TRIBE;

};

char CheckpointReunion(char Progress[]){
char option;
system("clear");
PrintfGraphics("Campfire.txt", 11);
printf("   You've reached a "ANSI_COLOR_GREEN"CKECKPOINT!"ANSI_COLOR_RESET"");
system("setterm -bold on");
printf("\n"ANSI_COLOR_GREEN"Save?"ANSI_COLOR_RESET" (y/n)");
system("setterm -bold on");
printf("\n > ");
scanf("\n%c", &option);
if(option == 'y'){
  printf("\n\n\n"ANSI_COLOR_RED"Saving..."ANSI_COLOR_RESET"");
  printf("\n");
  FILE* TribeCheck= fopen("Progress.txt", "w");
 fprintf(TribeCheck, "%s",Progress);
 fclose(TribeCheck);
  sleep(5);
}//else if(option == 'n'){
 //printf("\n\n\n"ANSI_COLOR_RED"Loading..."ANSI_COLOR_RESET); 
 //printf("\n");
 //FILE* TribeCheck1= fopen("Progress.txt", "w");
 //fprintf(TribeCheck1, "n");
 //fclose(TribeCheck1);
 //sleep(5);
//}
return option;
};



void LeavingHouse(char nameofPlayer[25]){
  system("clear");
  char graphLINE1[255];
  FILE* Filegrap1 = fopen("Graphics 1.txt", "r");
   for(int graph=0; graph<15; graph++){
      fgets(graphLINE1, 255, Filegrap1);
      printf("%s",graphLINE1);
    }
  printf("\n\n---------------------------------------------------------------------");
  printf("\n\n[%s",nameofPlayer);
  printf("]"); 
  printf(": Blacksmith stay right here im going to\n the center of the village to take a look..");
  printf("\n\n↠ [Blacksmith]: Alright.. be careful %s", nameofPlayer);
  sleep((float)4.1);
  char enter[1];
   printf("\n\n\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &enter[0]);  
      enter[0] = 'a';
  if(enter[0] == 'a'){
    system("clear");
    FILE* Filegrap1 = fopen("Graphics 1.txt", "r");
   for(int graph=0; graph<15; graph++){
      fgets(graphLINE1, 255, Filegrap1);
      printf("%s",graphLINE1);
    }
  printf("\n\n----------------------------------------------------");
  printf("\n\n     ["BOLD_RED"Loading"UNDO"]");
  }
  printf("\n");
  sleep((float)4.2);
  system("clear");
    FILE* Filegrap2 = fopen("Graphics 1.txt", "r");
   for(int graph=0; graph<15; graph++){
      fgets(graphLINE1, 255, Filegrap2);
      printf("%s",graphLINE1);
    }
  printf("\n\n----------------------------------------------------");
  printf("\n");
  printf("↠ You are ready to start your "BOLD_GREEN"adventure"UNDO".\n");
  printf("\n↠ On the Left-Down Corner of your screen you will\n be shown your name, if you select that \n your items, progress, statics,and a map will be shown.\n Good luck %s.", nameofPlayer); 
printf("\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &enter[0]);  
      enter[0] = 'a';
  if(enter[0] == 'a'){
    system("clear");
  

printf("\n\n");
  
}
}
int Statics(int* Mana, int* Armor, int* Damage, int* Stamina, int* experiences, int* HealthPlayer){
  char Tribe[15];
  char lineForName[255];
  FILE *fForTribe = fopen("TRIBE.txt", "r");
  fgets(lineForName, 255,fForTribe);
  strcpy(Tribe,lineForName);

if(strcmp(Tribe, "WhiteWizard")){
  *HealthPlayer = 490;
  *Mana = 410;
  *Damage = 50;
  *Stamina = 375;
  *Armor = 15;
 }
 else if(strcmp(Tribe, "GreyWizard")){
  *HealthPlayer = 550;
  *Mana = 335;
  *Damage = 47;
  *Stamina = 412;
  *Armor = 20;
 
 } else if(strcmp(Tribe, "BlackWizard")){
  *HealthPlayer= 550;
  *Mana = 320;
  *Damage = 53;
  *Stamina = 400;
  *Armor = 24;
} else if(strcmp(Tribe, "RangerNative")){
  *HealthPlayer= 550;
  *Mana = 320;
  *Damage = 50;
  *Stamina = 400;
  *Armor = 20;
} else if(strcmp(Tribe, "OcculistNative")){
  *HealthPlayer= 550;
  *Mana = 320;
  *Damage = 48;
  *Stamina = 400;
  *Armor = 24;
} else if(strcmp(Tribe, "DefenderNative")){
  *HealthPlayer= 550;
  *Mana = 320;
  *Damage = 48;
  *Stamina = 400;
  *Armor = 28;
} else if(strcmp(Tribe, "FireWarrior")){
  *HealthPlayer= 560;
  *Mana = 300;
  *Damage = 50;
  *Stamina = 400;
  *Armor = 30;
} else if(strcmp(Tribe, "WaterWarrior")){
  *HealthPlayer= 550;
  *Mana = 350;
  *Damage = 50;
  *Stamina = 400;
  *Armor = 20;
} else if(strcmp(Tribe, "EarthWarrior")){
  *HealthPlayer = 570;
  *Mana = 320;
  *Damage = 50;
  *Stamina = 400;
  *Armor = 35;
}
return *Mana;
return *HealthPlayer;
return *Stamina;
return *Damage;
return *Armor;
return *experiences;  
}

int Adventure_Start(char nameofPlayer[25], char Tribe[25],  int *HealthPlayer, int *Mana, int *Armor, int *Damage,int *Stamina,int *experiences,struct ArmorPerson *p, struct Values *v,int LeveL,int VarityOfItems,int Split,int Result,int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int *Gold,int Goback1){
LeveL = 1;
  int rewards =0;
  int MonsterDamage = 0;
  int WALL = 2;
  int RandomDamage;
  char PlayerHealth[10];
  char HealthLine[255];
  char option;
Again:
  system("clear");

  PrintfGraphics("Graphics 2.txt", 29);

  FILE * FLEVEL = fopen("Experiences.txt", "w");
  fprintf(FLEVEL,"0");
  fclose(FLEVEL);

  printf("\n\n                   ["BOLD_RED"Loading"UNDO"]");
  printf("\n");
  sleep((float)4.2);
  //ADVENTURE STARTS.//
  srand(time(NULL));
  FIRST_ATTACK:
  printf("\n");
  system("clear");
  PrintfGraphics("Graphics 3.txt",20);
  //Before Monster: //
  printf("\n\n          ↠ On your way to the village, a Bean Sidh Level 1 Appears...(Monster)");
  printf("\n\n");
  sleep(4);
again:
  system("clear");
  BeforeMonster("Monster 1.txt",nameofPlayer ,"Bean Sidh", 11,1, 1);


   if((strcmp(Tribe, "WhiteWizard")==0 ||strcmp(Tribe, "BlackWizard")==0 || strcmp(Tribe, "GreyWizard")==0)){
    FILE * fSkills = fopen("Skills.txt", "w");
     fprintf(fSkills,"↠ 1) Lightning (15 Mana Required)");
     fprintf(fSkills,"\n↠ 2) Small-Fire-Ball (50 Mana Required)");
     fprintf(fSkills,"\n↠ 4) Protective-Magic-Wall   ");
     fclose(fSkills); 
      
   }else if((strcmp(Tribe, "FireWarrior")==0 ||strcmp(Tribe, "WaterWarrior")==0 || strcmp(Tribe, "EarthWarrior")==0)){
    FILE * fSkills = fopen("Skills.txt", "w");
     fprintf(fSkills,"↠ 1) Head-Attack (15 Mana Required)");
     fprintf(fSkills,"\n↠ 2) Shord Attack (50 Mana Required)");
     fprintf(fSkills,"\n↠ 4) Protective-Magic-Wall   ");
     fclose(fSkills); 
      
   }else if((strcmp(Tribe, "OcculistNative")==0 ||strcmp(Tribe, "RangerNative")==0 || strcmp(Tribe, "DefenderNative")==0)){
    FILE * fSkills = fopen("Skills.txt", "w");
     fprintf(fSkills,"↠ 1) Magic-Poison (15 Mana Required)");
     fprintf(fSkills,"\n↠ 2) Native Shot (50 Mana Required)");
     fprintf(fSkills,"\n↠ 4) Protective-Wall   ");
     fclose(fSkills); 
   }


  do{
    printf("\n>");
    scanf("\n%c", &option);
  }while(option != '1' && option != '2' && option !='3');


  if(option == '1'){
  //Battle:  //  
  ATTACK: 

    Battles(*(Mana),*(HealthPlayer),*(Stamina),*(Armor),*(Damage),"Monster 1.txt",11,"Skills.txt",3,&Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,"Bean Sidh",120,25,20,LeveL,0);
    if(Result == 0){
      goto Again;
    }
  }else if(option == '2'){
    PlayerInGeneral(Tribe,nameofPlayer,"Statics.txt",VarityOfItems,LeveL,Split,&Mana,&HealthPlayer,&Stamina,&Armor,&Damage,&Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,Gold,experiences,Goback1,1,p);
    goto again;

  }else if(option == '3'){
    LeveLShow(&LeveL,LeveL,*experiences);
    goto again;
  }


//END OF ATTACK:
  
  AfterBattle(Result,experiences,Gold,15,450,p,Large_Health_Potion,Large_Mana_Potion,v,Tribe,Damage,HealthPlayer,Armor,Mana,LeveL);
   
   printf("TEEST: %i",*(experiences));
   printf("\n\n");
   sleep(3);
  ArmorPicked(" Weapon", BOLD_CYAN"Silver"UNDO, p, v, Tribe, &Damage, &HealthPlayer, &Mana, &Armor);

  printf("\n\n");
  sleep((float)3.5);
return *experiences;
}



int AfterMonster1(int *Mana_Potion){
  system("clear");
  char option;
  char LineGraphics3[255];
  FILE* Graphics3= fopen("Graphics 3.txt", "r");
  for(int k=0; k<29; k++){
  fgets(LineGraphics3, 255, Graphics3);
  printf("%s",LineGraphics3);
  }
  printf("\n-------------------------------------------------------------\n");
  printf("\n↠You can "ANSI_COLOR_GREEN"Search"ANSI_COLOR_RESET" the place for items before you go..");
  printf("\n\n↠ Type [s] to search.");
  printf("\n↠ Type [k] to skip. ");
  printf("\n>");
  scanf("\n%c", &option);

  if(option == 's'){
    system("clear");
  FILE* Graphics3= fopen("Graphics 3.txt", "r");
  for(int k=0; k<29; k++){
  fgets(LineGraphics3, 255, Graphics3);
  printf("%s",LineGraphics3);
  }
  
  printf("\n-------------------------------------------------------------\n");
    
    printf("\n"ANSI_COLOR_RED"↠ Searching..\n"ANSI_COLOR_RESET"");
    printf("↠ You found a "ANSI_COLOR_MAGENTA"Mana Potion!"ANSI_COLOR_RESET"");
    *(Mana_Potion)+=1;
    FILE * fMana = fopen("Potions.txt", "w");
    fprintf(fMana,"Mana\n");
    fprintf(fMana, "%i", *Mana_Potion);
    fclose(fMana);
    
    sleep(2);
    printf("\n\n");
    printf("\n");
    
    sleep(4);
  }else if(option == 'k'){
   printf("\n\n"ANSI_COLOR_RED"Loading..."ANSI_COLOR_RESET"");
  printf("\n");
  printf("\n");
  sleep(4);
  }
return *Mana_Potion;

}

int Monster2(int Level, int *Mana, int *Health, int *Damage, int *Stamina, int *Armor, int *Experiences,char Tribe[25],char Name[25],char Statics[25], int VarityOfItems, int *Health_Potion,int Split,int *Result, int *Mana_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int *Gold,struct ArmorPerson *p){
  system("clear");
int fast = 0;
char enter[1];
int on = 1;
int DamageFirst;
int DamageSecond;
int DamageThird;
int option;
char option2;
Start1:
printf(" ");
PrintfGraphics("Friends House.txt", 32);
printf("\n          ↠ As your walking..you suddendly step across\n          your friends house, you been friends for a long\n          time..\n");
if(fast == 0){
sleep((float)1.5);
}
printf("\n           ["BOLD_RED"1"UNDO"]Knock.");
if(fast == 0){
sleep((float)3.5);
}
printf("\n           ["BOLD_RED"2"UNDO"]Search for Items.");
printf("\n           ["BOLD_RED"3"UNDO"]Yell for him.");
printf("\n>");
scanf("%i", &option);
if(option == 1){
  system("clear");
  PrintfGraphics("Friends House.txt", 32);
  printf("\n\n");
  printf("           ...");
  printf("\n");
  sleep((float) 2.5);
  printf(" ");
  printf("\n           ↠ You realise that the door is slighly open..");
  printf("");
  printf("\n           ↠ You step inside..");
   sleep(4);
  printf("\n");
  printf("\n");
  sleep((float)2.5);
  char lineMonster[255];
Start:
  system("clear");
BeforeMonster("Monster2.txt", Name, "Astomi", 15,  Level, 1);
  printf("\n>");
  scanf("\n%c", &option2);
  if(option2 == '1'){
    goto BATTLE2;
  
 
 }else if(option2 == '2'){
   PlayerInGeneral(Tribe, Name,"Statics.txt", VarityOfItems,  Level, Split,  &Mana,  &Health,  &Stamina, &Armor, &Damage, &Result,  Mana_Potion, Health_Potion, &Large_Mana_Potion,&Large_Health_Potion,&Gold,Experiences,15,2,p); 
  goto Start;
 }else if(option2 == '3'){
   LeveLShow(&Level,Level,*Experiences);
   system("clear");
   goto Start;
 }
 
  


}else if (option == 2 && on == 1){
 on--;
 system("clear");
PrintfGraphics("Friends House.txt", 32);
printf("\n\n               ["BOLD_RED"Searching"UNDO"]");
printf("\n");
sleep((float)2.5);
printf("               You found a """ANSI_COLOR_GREEN"""Health Potion" ANSI_COLOR_RESET);
*Health_Potion+=1;
printf("\n");
sleep(3);
fast = 1;
printf("\n");
system("clear");
goto Start1;
}else if(option == 2 && on ==0){
  printf("\n\n               ↠ You've already Searched the place..");
  printf("\n");
 sleep(3);
 printf("\n");
 goto Start1;
}else if(option == 3){
  system("clear");
  PrintfGraphics("Friends House.txt", 32);
  printf("\n\n               ↠ [%s]: JOSH! are you in there?", Name);
  printf("\n               ↠ ...");
  sleep(2);
  printf("\n               ↠ As You Yelled..a wild "ANSI_COLOR_RED"Monster"ANSI_COLOR_RESET" came from the house..");
  sleep(2);
  printf("\n");
 sleep(3);
 printf("");
 goto Start;
}

BATTLE2:
sleep(2);
return *Health_Potion;
return Level;
}

int HouseOfHoshAndQuest(char Name[], int *Gold, int *Mana, int *Health, int *Stamina, int *Armor, int *Damage, int *Mana_Potion, int *Health_Potion, int *Large_Health_Potion, int *Large_Mana_Potion,char Tribe[15], int VarityOfItems, int LeveL, int *experiences, int Split,struct ArmorPerson *p,struct Values *v){

Again:
 system("clear");
 int Result;
 int option;
 char line[255];
 FILE * fLivingRoom  = fopen("Living room of Josh.txt", "r");
 for(int l=0; l<21; l++){
   fgets(line,255,fLivingRoom);
   printf("%s", line);
 }
 printf("\n------------------------------------------------------\n\n");
 printf("↠ You've finally stepped into his living room.");
 printf("\n\n↠ [%s]: Josh are you in here?",Name);
 sleep((float)2.5);
 printf("\n\n↠ [Josh]: %s? im in my room locked, are you okay?",Name);
 sleep(4);
 printf("\n\n↠ [%s]: Yeah.. you can come out theres no monsters around..",Name);
 sleep(4);
 printf("\n\n↠ .... ");
 sleep(3);
 printf("\n\n↠ [Josh]: How do you ended up in here, and why are you here?!");
 sleep(4);
 printf("\n\n↠ [%s]: Well..i traveled as you know to get some supply..and i sow Blacksmith been attacked, he told me everything, i took some armour from him as well.",Name);
 sleep(5);
 printf("\n\n↠ [Josh]: And why are you still here? ");
 sleep(5);
 printf("\n\n↠ [%s]: My wife came before me and I..dont know where she is. ",Name);
 sleep(4);
 printf("\n\n↠ [Josh]: Are you kidding me? ok.. %s take me to Blacksmith for some armour, hes not far anyway, lets go explore together..i dont want you to get hurt",Name);
 sleep(5);
 printf("\n\n↠ [%s]: Sure lets go!",Name);
 sleep((float)5.5);
 printf(ANSI_COLOR_GREEN"\n\n↠ New Quest has been "ANSI_COLOR_MAGENTA"added.");
 printf(ANSI_COLOR_RESET"\n↠ Get to the Blacksmiths house.");
 printf("\n↠ "ANSI_COLOR_YELLOW"Gold"ANSI_COLOR_RESET": 25 " ); 
 char option1[1];
 printf("\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &option1[0]); 
      option1[0] = 'a';
  if(option1[0] == 'a'){
  goto Loading;
  }
Loading:
 printf("");
 system("clear");
 //BLACKSMITH + MONSTER: //
  char linesFoot[255];
  FILE * fLoading = fopen("FootPrints.txt", "r");
  for(int k=0; k<11; k++){
   fgets(linesFoot,255,fLoading);
   printf("          %s", linesFoot);
  }
  printf("\n------------------------------------------------------\n\n");
  printf("["BOLD_RED" Loading "UNDO"]");
  printf("\n");
  sleep(6);
  printf("\n                ↠ *On your way to Blacksmith's House, you got Spooked! by a "ANSI_COLOR_RED"Skeleton Level 1 "ANSI_COLOR_RESET);
  printf("\n");
  sleep(3);
  BATTLE:
  system("clear");
  BeforeMonster("Monster 3.txt", Name,"Skeleton",14 ,  LeveL, 1);
  printf("\n> ");
  scanf("%i", &option);
  if(option == 1){
     Battles(*(Mana), *(Health),*(Stamina),*(Armor),*(Damage),"Monster 3.txt",14,"Skills.txt",3,&Result,Mana_Potion,Health_Potion, Large_Mana_Potion, Large_Health_Potion, "Skeleton LeveL 1",460,116,45,LeveL,1);
      if(Result == 0){
        goto Again;
      }
     /*int Mana, int Health, int Stamina, int Armor, int Damage,char FileMonster[25], int sizeMonster, char FileSkills[25], int sizeSkills, int *Result, int Mana_Potion, int Health_Potion, int Large_Mana_Potion, int Large_Health_Potion,char MonsterName[25], int Monster_Health, int DamageMax, int DamageMin, int LeveL,int lineon*/
  }else if(option == 2){
   PlayerInGeneral(Tribe, Name,"Statics.txt", VarityOfItems,  LeveL, Split,  Mana,  Health,  Stamina,  Armor, Damage, &Result,  Mana_Potion, Health_Potion, Large_Mana_Potion, Large_Health_Potion, Gold, experiences,15,2,p);
    goto BATTLE;
  }else if(option == 3){
    LeveLShow(&LeveL,LeveL,*experiences);
     goto BATTLE;
  }
  if(Result == 1){
    AfterBattle(Result, experiences, Gold, 15,650,p,&Large_Health_Potion,&Large_Mana_Potion,v,Tribe,&Damage,&Health,&Armor,&Mana,LeveL); 
    /*int Result, int *Experiences, int *gold, int addGold, int addxp,struct ArmorPerson *p,int *Large_Health_Potion, int *Large_Mana_Potion,struct Values *v,char Tribe[35],int *Damage,int *Health, int *Armor, int *Mana,int LeveL*/
  }else if(Result == 0){
    goto BATTLE;
  }
  printf("\n\n");
  sleep(2);
  Blacksmith:
  system("clear");
  char SmithLine[255];
  FILE * fBlackSmith = fopen("Graphics 1.txt", "r");
  for(int i=0; i<15; i++){
    fgets(SmithLine,255,fBlackSmith);
    printf("%s", SmithLine);
  }
  printf("\n----------------------------------------------------------------\n\n");
  printf("↠[%s]: Ok, we are here..let me take a look inside. ",Name);
  sleep(3);
  printf("\n\n↠ *You see Blacksmith on the floor*");
  sleep(4);
  printf("\n\n↠[%s]: ... Blacksmith???",Name);
  sleep(2);
  printf("\n\n↠ *You check his palms..");
  sleep(2);
  printf("\n\n↠ *You realised, he died...*  ");
  sleep(4);
  printf("\n\n↠[%s]: JOSH! Blacksmith.. he.. was loosing a lot of blood, unfortunatly ", Name);
  sleep(3);
  printf("\n\n↠[Josh]: He died?? ");
  sleep(5);
  printf("\n\n↠[Josh]: oh my god.....");
  sleep(2);
  printf("\n\n↠[%s]: Lets go to the basement, get you some armour and lets go, we must hurry.",Name);
  sleep(4);
char option3[1];
 printf("\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &option3[0]); 
      option3[0] = 'a';
  if(option3[0] == 'a'){
  goto EndOfSmith;
  }

EndOfSmith:
return *experiences;
}

int BeforeShop(int *Experiences, char Tribe[], int *Damage, int *Health, int *Mana, int *Armor, char Name[], int *Gold){
  
system("clear");
char SmithLine[255];
  FILE * fBlackSmith = fopen("Graphics 1.txt", "r");
  for(int i=0; i<15; i++){
    fgets(SmithLine,255,fBlackSmith);
    printf("%s", SmithLine);
  }  
 printf("\n\n↠ Quest has been "ANSI_COLOR_GREEN"completed."ANSI_COLOR_RESET);
 printf("\n\n↠ Rewards: +25 "ANSI_COLOR_YELLOW"Gold"ANSI_COLOR_RESET); 
 printf("\n↠ Experiences: "ANSI_COLOR_GREEN"+ 1350"ANSI_COLOR_RESET"!");
 *(Gold)+=25;
 *(Experiences) += 1350;
 printf("\n");
 sleep(4);
 char option3[1];
 printf("\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &option3[0]); 
      option3[0] = 'a';
  if(option3[0] == 'a'){
  goto LeveLUp;
  }

LeveLUp:
system("clear");
char LeveLLines[255];
FILE * fLevelUp = fopen("LeveL up.txt", "r");
for(int k =0; k<10; k++){
  fgets(LeveLLines, 255, fLevelUp);
  printf("%s", LeveLLines);
}
printf("\n----------------------------------------------------------\n\n");
system("setterm bold-on");  
printf(ANSI_COLOR_GREEN"                       LEVEL UP!"ANSI_COLOR_RESET);
system("setterm bold-on");  
printf("\n\n↠ Congraulations ");
printf("\n↠ You can "ANSI_COLOR_MAGENTA"access "ANSI_COLOR_RESET"the Map now.");
printf("\n\n\n↠ Depend on your "ANSI_COLOR_MAGENTA"Clash"ANSI_COLOR_RESET" you've got "ANSI_COLOR_GREEN"Extra Values"ANSI_COLOR_RESET"! ");
if(strcmp(Tribe, "WhiteWizard")==0){
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +50");
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +10");
  *Health += 50;
  *Armor += 10;
  printf("\n↠ New move learned: "BLUE"\"Freeze to Death\""UNDO" ");
  }
 else if(strcmp(Tribe, "BlackWizard")==0){
  printf("\n↠ Extra "ANSI_COLOR_RED"Damage"ANSI_COLOR_RESET": +50");
  *Damage +=50;
  printf("\n↠ New move learned: "BLUE"\"Freeze to Death\""UNDO" ");
}
else if(strcmp(Tribe, "GreyWizard")==0){
  printf("\n↠ Extra "ANSI_COLOR_BLUE"Mana"ANSI_COLOR_RESET": +20");
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +15");
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +15");
  *Mana+=20;
  *Health+=15;
  *Armor+=15;
  printf("\n↠ New move learned: "BLUE"\"Freeze to Death\""UNDO" ");
}
else if(strcmp(Tribe, "RangerNative")==0){
  printf("\n↠ Extra "ANSI_COLOR_RED"Damage"ANSI_COLOR_RESET": +50");
  *Damage+=50;
  printf("\n↠ New move learned: "BLUE"\"Head-Shot\""UNDO" ");
}
else if(strcmp(Tribe, "OcculistNative")==0){
  printf("\n↠ Extra "ANSI_COLOR_BLUE"Mana"ANSI_COLOR_RESET": +20");
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +15");
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +15");
  *Mana+=20;
  *Health+=15;
  *Armor+=15;
  printf("\n↠ New move learned: "BLUE"\"Head-Shot\""UNDO" ");
}
else if(strcmp(Tribe, "DefenderNative")==0){
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +50");
  *Health+=50;
  printf("\n↠ New move learned: "BLUE"\"Head-Shot\""UNDO" ");
}
else if(strcmp(Tribe, "WaterWarrior")==0){
 printf("\n↠ Extra "ANSI_COLOR_BLUE"Mana"ANSI_COLOR_RESET": +20");
 printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +15");
 printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +15");
 *Mana+=20;
 *Health+=15;
 *Armor+=15;
 printf("\n↠ New move learned: "BLUE"\"Head-to-Head\""UNDO" ");
}
else if(strcmp(Tribe, "FireWarrior")==0){
  printf("\n↠ Extra "ANSI_COLOR_RED"Damage"ANSI_COLOR_RESET": +50");
  *Damage+=50;
  printf("\n↠ New move learned: "BLUE"\"Head-to-Head\""UNDO" ");
}
else if(strcmp(Tribe, "EarthWarrior")==0){
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +50");
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +10");
  *Health+=50;
  *Armor+=10;
  printf("\n↠ New move learned: "BLUE"\"Head-to-Head\""UNDO" ");
}
char option4[1];
 printf("\n\n\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &option4[0]); 
      option4[0] = 'a';
  if(option4[0] == 'a'){
  goto Shop;
  }
Shop:
system("clear");
char linesSmith[255];
FILE *fSmith = fopen("Graphics 1.txt", "r");
for(int k=0; k<15; k++){
  fgets(linesSmith,255,fSmith);
  printf("%s", linesSmith);
}
printf("\n----------------------------------------------------------\n\n");
printf("↠ [%s]: Josh i've got a Map with directions, it will take us to different areas of this place, lets go explore! ",Name);
sleep(2);
printf("\n\n↠ [Josh]: Wait! ill take you to the Shop first, there you can buy medicine and maybe armour..im not sure");
sleep(4);
printf("\n\n↠ [%s]: Really? i hope he can open to us! ",Name);
sleep(4);
printf("\n\n↠ [Josh]: He better do!");
sleep((float)3.5);
char option5[1];
printf("\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &option5[0]); 
      option5[0] = 'a';
  if(option5[0] == 'a'){
  goto Shop1;
  }
Shop1:
system("clear");  
char footprintsLines[255];
FILE * Ffoot = fopen("FootPrints.txt", "r");
for(int k=0; k<11; k++){
  fgets(footprintsLines,255,Ffoot);
  printf("        %s", footprintsLines);
}
printf("\n----------------------------------------------------------\n\n");
printf(ANSI_COLOR_RED"↠ Loading.."ANSI_COLOR_RESET);
printf("\n");
printf("");
sleep(6);


return *Experiences;
return *Armor;
return *Damage;
return *Mana;
return *Health;
}




//         ________
//        |        |
//    ____|________|____
//       //// _____)
//      _|   (o)(o)
//     (o        \|
//       |     (..)
//       |\   /||||\
//       | \/       
//       |  ---- 


//ΒΑΣΙΚΟ (ΜΑΙΝ) //

int main(void){
 srand(time(NULL));
 struct Values valuesItems;
 struct ArmorPerson person;
 struct Stats stats;
 //Shop();
 system("clear");
 char Option;
 char paixthsOnoma[25];
 int optionSpiti,FirstTimeShop = 0,MapDirector;
 char TRIBE[20];
 char option2;
//GIA TO VOID LEVEL:(ΟΤΑΝ ΤΟ ΚΑΛΕΣΩ.) //
 FILE * fLevelNow = fopen("LevelNow.txt", "w");
 fprintf(fLevelNow,"1");
 fclose(fLevelNow);
 
 int LeveLNow;

char LeveLNowLines[255];
FILE *fLevelNowGetInt = fopen("LevelNow.txt", "r");
fgets(LeveLNowLines, 255,fLevelNowGetInt);
sscanf(LeveLNowLines, "%i",&LeveLNow);

//------------------//
 
 int Extra_Damage;
 int Extra_Mana;
 int Extra_Stamina;
 int Extra_Armor;
 int Extra_Health;

 int Large_Mana_Potion= 0; 
 int Large_Health_Potion= 0; 
 int Mana_Potion= 0;
 int Health_Potion= 0;

 int BattleResult;
 int Level;

 int Goback1 = 0;

 int Gold =0;
 int Split=0;

 int VarityofItems=0;

 int Mana = 0;
 int Health = 0;
 int Damage = 0;
 int Armor = 0;
 int Stamina = 0;
 int Experiences= 0;

//-------IF THE USER COMPLETS THE DIRECTION: ---------//
int MiddleDone = 0,SouthDone = 0,EastDone = 0,NorthDone=0;
 char TheTribe[25];
 char Gender[25];
 char Progress[25];
BEGGINING:


// START OF GAME: 
 Option = Menu(Option, paixthsOnoma);
//------------------------------------------



  switch(Option){
 
   case '1':
   printf("\n           ["BOLD_RED "Loading"UNDO"] ");
   printf("\n\n");
   sleep(2);
   FILE *FNewGame = fopen("Progress.txt","w");   
   fprintf(FNewGame,"n");
   fclose(FNewGame);
   sleep(2);  
   system("clear");
   onoma(paixthsOnoma); 
   karabifeygei();
   epilogesArxh(paixthsOnoma);
   fylh(paixthsOnoma, TheTribe);
   FILE * JustName = fopen("Name.txt", "w");
  fprintf(JustName, "%s", paixthsOnoma);  
  fclose(JustName);

Statics(&Mana,&Armor,&Damage,&Stamina,&Experiences,&Health);
ValuesOfItems(&valuesItems);
StartingItems(&person, &valuesItems, TheTribe, &Damage, &Mana, &Health, &Armor);

AfterCheckInput(Damage,Armor,Mana,Health,Experiences,Health_Potion,Mana_Potion,Large_Health_Potion,Large_Mana_Potion,&person,TheTribe,paixthsOnoma,MiddleDone,SouthDone,NorthDone,EastDone);
CheckpointReunion("Progress: 10"); 
  
CHECKPOINT1:

AfterCheckOutput(&Damage,&Armor,&Mana,&Health,&Experiences,&Health_Potion,&Mana_Potion,&Large_Health_Potion,&Large_Mana_Potion,&person,TheTribe,paixthsOnoma,&MiddleDone,&SouthDone,&NorthDone,&EastDone);
printf("");
ValuesOfItems(&valuesItems);

char LineName[255];
FILE* justName1= fopen("Name.txt", "r");
fgets(LineName, 255, justName1);
strcpy(paixthsOnoma, LineName);

FILE* justTribe1= fopen("TRIBE.txt", "r");
fgets(LineName, 255, justTribe1);
strcpy(TheTribe, LineName);

FILE* justGender1= fopen("GENDER.txt", "r");
fgets(LineName, 255, justGender1);
strcpy(Gender, LineName);

FILE* justProgress1= fopen("Progress.txt", "r");
fgets(LineName, 255, justProgress1);
strcpy(Progress, LineName);
fclose(justProgress1);

//CHECKPOINT3:


LeavingHouse(paixthsOnoma);


//TESTXP: //

Adventure_Start(paixthsOnoma,TheTribe,&Health,&Mana,&Armor,&Damage,&Stamina,&Experiences,&person,&valuesItems,Level,VarityofItems,Split,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,Goback1);


AfterMonster1(&Mana_Potion);


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
Monster2(LeveLNow,&Mana,&Health,&Damage,&Stamina,&Armor,&Experiences,TheTribe,paixthsOnoma,"Statics.txt",VarityofItems,&Health_Potion,Split,&BattleResult,&Mana_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,&person);
BATTLE2:

//SECOND BATTLE: //
Battles(Mana,  Health, Stamina,  Armor,  Damage,  "Monster2.txt",  15,  "Skills.txt",3,&BattleResult,&Mana_Potion,&Health_Potion, &Large_Mana_Potion, &Large_Health_Potion, "Astomi LeveL 1",460,101,35,LeveLNow,1);


if(BattleResult == 0){
char line[255];
char Result[25]; 
FILE * fBattle = fopen("Progress.txt", "r");
fgets(line, 255, fBattle);
strcpy(Result, line);

if(strcmp(Result, "Progress: 10")!=0){
 goto BEGGINING;
}else if(strcmp(Result, "Progress: 10")==0){
  goto CHECKPOINT1;
}

}
else if(BattleResult == 1){
  ValuesOfItems(&valuesItems);

  AfterBattle(BattleResult, &Experiences, &Gold, 12 , 550, &person,&Large_Health_Potion,&Large_Mana_Potion,&valuesItems,TheTribe,&Damage,&Health,&Armor,&Mana,LeveLNow);
  
  VarityofItems++;
}
END1:



//Statics(&Mana,&Armor,&Damage,&Stamina,&Experiences,&Health);

ValuesOfItems(&valuesItems);

//StartingItems(&person, &valuesItems, TheTribe, &Damage, &Mana, &Health, &Armor);


HouseOfHoshAndQuest(paixthsOnoma,&Gold,&Mana,&Health,&Stamina,&Armor,&Damage,&Mana_Potion,&Health_Potion,&Large_Health_Potion,&Large_Mana_Potion,TheTribe,VarityofItems, LeveLNow, &Experiences,Split,&person,&valuesItems);


BeforeShop(&Experiences,TheTribe, &Damage, &Health, &Mana, &Armor, paixthsOnoma, &Gold);


//CHECKPOINT3:

printf("");
CheckpointReunion("Progress: 20");
//
AfterCheckInput(Damage,Armor,Mana,Health,Experiences,Health_Potion,Mana_Potion,Large_Health_Potion,Large_Mana_Potion,&person,TheTribe,paixthsOnoma,MiddleDone,SouthDone,NorthDone,EastDone);


CHECKPOINT2:
//---------------------------------------------New Move Learned:
printf("");
AfterCheckOutput(&Damage,&Armor,&Mana,&Health,&Experiences,&Health_Potion,&Mana_Potion,&Large_Health_Potion,&Large_Mana_Potion,&person,TheTribe,paixthsOnoma,&MiddleDone,&SouthDone,&NorthDone,&EastDone);
ValuesOfItems(&valuesItems);

 FILE * Statics1 = fopen("Skills.txt","w");
  if(strcmp(TheTribe,"WhiteWizard")==0 ||strcmp(TheTribe,     "BlackWizard")==0 || strcmp(TheTribe,"GreyWizard")==0){
   fprintf(Statics1,"↠ 1) Lightning (15 Mana Required)");
    fprintf(Statics1,"\n↠ 2) Small-Fire-Ball (50 Mana Required)");
    fprintf(Statics1,"\n↠ 3) Freeze to Death (90 Mana Required)");
    fprintf(Statics1,"\n↠ 4) Protective-Magic-Wall");
   fclose(Statics1);
}else if(strcmp(TheTribe,"DefenderNative")==0 ||strcmp(TheTribe,"OcculistNative")==0 || strcmp(TheTribe,"RangerNative")==0){
   fprintf(Statics1,"↠ 1) Magic-Poison (15 Mana Required)");
     fprintf(Statics1,"\n↠ 2) Native Shot (50 Mana Required)");
     fprintf(Statics1,"\n↠ 3) Head-Shot (90 Mana Required)");
     fprintf(Statics1,"\n↠ 4) Protective-Wall");
     fclose(Statics1);
}else if(strcmp(TheTribe,"EarthWarrior")==0 ||strcmp(TheTribe,"FireWarrior")==0 || strcmp(TheTribe,"WaterWarrior")==0){
   fprintf(Statics1,"↠ 1) Head-Attack (15 Mana Required)");
     fprintf(Statics1,"\n↠ 2) Shord Attack (50 Mana Required)");
     fprintf(Statics1,"\n↠ 3) Head-to-Head (90 Mana Required)");
     fprintf(Statics1,"\n↠ 4) Protective-Magic-Wall");
     fclose(Statics1);
  
}

//-------------------------------------New Chapter: //

//AfterBattle(BattleResult, &Experiences, &Gold, 50, 550, &person,&Large_Health_Potion,&Large_Mana_Potion,&valuesItems,TheTribe,&Damage,&Health,&Armor,&Mana,LeveLNow);

/*int *Large_Health_Potion, int *Large_Mana_Potion,struct Values *v,char Tribe[35],int *Damage,int *Health, int *Armor, int *Mana*/

Shop(Split,paixthsOnoma,&Mana,&Health,&Stamina,&Armor,&Damage,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Experiences,Goback1,FirstTimeShop,&SouthDone,&NorthDone,&MiddleDone,&EastDone,Gold,&person,&valuesItems);
FirstTimeShop+=1;

Splitting(paixthsOnoma,&Split);

LeveLNow = 2;
ValuesOfItems(&valuesItems);
if(Split == 0){
  GoMiddle(Split,paixthsOnoma,&Mana,&Health,&Stamina,&Armor,&Damage,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Split,&Experiences, Goback1,&MiddleDone,&person,&valuesItems);
}else if(Split == 1){
  Map2LevelAndUp(Split, paixthsOnoma, &Mana, &Health, &Stamina, &Armor, &Damage, &BattleResult, &Mana_Potion, &Health_Potion, &Large_Mana_Potion,
  &Large_Health_Potion, &Gold, TheTribe, VarityofItems,LeveLNow, Experiences, Goback1); 
Again:
  printf("\n>");
  scanf("%i",&MapDirector);
if(MapDirector  == 1){
  GoNorth(Split,paixthsOnoma,Mana,Health,Stamina,Armor,Damage,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Split,&Experiences, Goback1,&SouthDone,"Statics.txt",&person);
}
else if(MapDirector == 2){
  printf("\n↠ You must first Finish all the other "MAGENTA"Quests"UNDO" to Go.");
  goto Again;
}
else if(MapDirector == 3){
  GoSouth(Split,paixthsOnoma,&Mana,&Health,Stamina,&Armor,&Damage,&BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Split,&Experiences, Goback1,&SouthDone,"Statics.txt",&person,&valuesItems);

}
else if(MapDirector == 4){
  GoMiddle(Split,paixthsOnoma,&Mana,&Health,&Stamina,&Armor,&Damage,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Split,&Experiences, Goback1,&MiddleDone,&person,&valuesItems);

}

}



sleep(3);

LeveLUpMessage(TheTribe, &Damage, &Health, &Mana, &Armor, 50, 85, 85, 45);
LeveLNow = 3;
//Adventure_Start(paixthsOnoma,TheTribe,Health,Mana,Armor,Damage,Stamina,&Experiences,&person,&valuesItems,Level,VarityofItems,Split,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,Goback1);



/*sleep(2);
printf("Armor : (%i)",Armor);
printf("Health : (%i)",Health);
printf("Mana : (%i)",Mana);
printf("Damage : (%i)",Damage);
printf("\n");
printf("\n");
sleep((float)3.5);

ArmorPicked(" Boots",BOLD_MAGENTA"Legendary"UNDO, &person,&valuesItems,TheTribe,&Damage,&Health,&Mana,&Armor);

printf("Armor : (%i)",Armor);
printf("Health : (%i)",Health);
printf("Mana : (%i)",Mana);
printf("Damage : (%i)",Damage);

printf("\n");
printf("\n");
sleep((float)3.5); */




//for(int i=0; i < 25; i++){
  //printf("%s",inventory[2]);
//}   


  
  
 

//SECOND BATTLE HIGH //



//int Mana, int Health, int Stamina, int Armor, int Damage,char FileMonster, int sizeMonster, char FileSkills, int sizeSkills

/*FILE * Gold1 =fopen("Gold.txt", "w");
fprintf(Gold1, "%i",Gold);
fclose(Gold1);

FILE * Manap = fopen("Mana_Potion.txt","w");
fprintf(Manap, "%i", Mana_Potion);

FILE * Healthp = fopen("Health_Potion.txt","w");
fprintf(Manap, "%i", Health_Potion);

FILE * LargeHealthp = fopen("Large_Health_Potion.txt","w");
fprintf(Manap, "%i", Large_Health_Potion);

FILE * LargeManap = fopen("Large_Mana_Potion.txt","w");
fprintf(Manap, "%i", Large_Mana_Potion);


FILE * Damage1 = fopen("Damage.txt","w");
fprintf(Damage1, "%i" , Damage);
fclose(Damage1);

FILE * Armor1 =fopen("Armor.txt", "w");
fprintf(Armor1, "%i",Armor);
fclose(Armor1);

FILE * Health1 =fopen("Health.txt", "w");
fprintf(Health1, "%i",Health);
fclose(Health1);

FILE * Mana1 =fopen("Mana.txt", "w");
fprintf(Mana1, "%i",Mana);
fclose(Mana1);
     
Level = 2; 
*/

// EXPERIENCE : //
/*  char lineXP[255];
 FILE *fXp11 = fopen("Experiences.txt", "r");
 fgets(lineXP, 255,fXp11);
 sscanf(lineXP, "%i",&Experiences);
// PALYER : //
 char LineName2[255];
 FILE* justName2= fopen("Name.txt", "r");
 fgets(LineName2, 255, justName2);
 strcpy(paixthsOnoma, LineName2);

 FILE* justTribe2= fopen("TRIBE.txt", "r");
 fgets(LineName2, 255, justTribe2);
 strcpy(TheTribe, LineName2);

 FILE* justGender2= fopen("GENDER.txt", "r");
 fgets(LineName2, 255, justGender2);
 strcpy(Gender, LineName2);

 FILE* justProgress2= fopen("Progress.txt", "r");
 fgets(LineName2, 255, justProgress2);
 strcpy(Progress, LineName2);


//STATISTICS: //
char Stats[255];
 FILE* Damagee= fopen("Damage.txt", "r");
 fgets(Stats, 255, Damagee);
 sscanf(Stats, "%i", &Damage);

 FILE* Healthh= fopen("Health.txt", "r");
 fgets(Stats, 255,  Healthh);
 sscanf(Stats, "%i", &Health);

 FILE* Armorr= fopen("Armor.txt", "r");
 fgets(Stats, 255, Armorr);
 sscanf(Stats, "%i", &Armor);

 FILE* Manaa = fopen("Mana.txt", "r");
 fgets(Stats, 255, Manaa);
 sscanf(Stats, "%i", &Mana);

 FILE *Gold11 = fopen("Gold.txt", "r");
 fgets(Stats, 255, Gold1);
 sscanf(Stats, "%i", &Gold);
*/
//Shop(Split,paixthsOnoma,&Mana,&Health,&Stamina,&Armor,&Damage,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Experiences,Goback1,FirstTimeShop,SouthDone,NorthDone,MiddleDone,EastDone,Gold);

//FirstTimeShop gia to splitting einai afto: //

sleep(5);

AfterCheckInput(Damage,Armor,Mana,Health,Experiences,Health_Potion,Mana_Potion,Large_Health_Potion,Large_Mana_Potion,&person,TheTribe,paixthsOnoma,MiddleDone,SouthDone,NorthDone,EastDone);

CHECKPOINT3:
LeveLNow = 3;
AfterCheckOutput(&Damage,&Armor,&Mana,&Health,&Experiences,&Health_Potion,&Mana_Potion,&Large_Health_Potion,&Large_Mana_Potion,&person,TheTribe,paixthsOnoma,&MiddleDone,&SouthDone,&NorthDone,&EastDone);
FirstTimeShop+=1;
ValuesOfItems(&valuesItems);

Shop(Split,paixthsOnoma,&Mana,&Health,&Stamina,&Armor,&Damage,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Experiences,Goback1,FirstTimeShop,&SouthDone,&NorthDone,&MiddleDone,&EastDone,Gold,&person,&valuesItems);

LeveLUpMessage(TheTribe, &Damage, &Health, &Mana, &Armor, 50, 85, 85, 45);


CheckpointReunion("Progress: P1");
AfterCheckInput(Damage,Armor,Mana,Health,Experiences,Health_Potion,Mana_Potion,Large_Health_Potion,Large_Mana_Potion,&person,TheTribe,paixthsOnoma,MiddleDone,SouthDone,NorthDone,EastDone);

CHECKPOINTP1:
LeveLNow = 4;
FirstTimeShop+=1;
AfterCheckOutput(&Damage,&Armor,&Mana,&Health,&Experiences,&Health_Potion,&Mana_Potion,&Large_Health_Potion,&Large_Mana_Potion,&person,TheTribe,paixthsOnoma,&MiddleDone,&SouthDone,&NorthDone,&EastDone);
ValuesOfItems(&valuesItems);

Shop(Split,paixthsOnoma,&Mana,&Health,&Stamina,&Armor,&Damage,BattleResult,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,TheTribe,VarityofItems,LeveLNow,Experiences,Goback1,FirstTimeShop,&SouthDone,&NorthDone,&MiddleDone,&EastDone,Gold,&person,&valuesItems);

ValuesOfItems(&valuesItems);
system("clear");
LeveLUpMessage(TheTribe, &Damage, &Health, &Mana, &Armor, 50, 85, 85, 45);

CheckpointReunion("Progress: P2");
AfterCheckInput(Damage,Armor,Mana,Health,Experiences,Health_Potion,Mana_Potion,Large_Health_Potion,Large_Mana_Potion,&person,TheTribe,paixthsOnoma,MiddleDone,SouthDone,NorthDone,EastDone);

CHECKPOINTP2:
LeveLNow = 5;
FirstTimeShop+=1;
AfterCheckOutput(&Damage,&Armor,&Mana,&Health,&Experiences,&Health_Potion,&Mana_Potion,&Large_Health_Potion,&Large_Mana_Potion,&person,TheTribe,paixthsOnoma,&MiddleDone,&SouthDone,&NorthDone,&EastDone);






GoEast(paixthsOnoma,Split);
/* printf("\n""["RED"1"UNDO"] Go North"ANSI_COLOR_RESET"\n");
    printf("["RED"2"UNDO"] Go East"ANSI_COLOR_RESET"\n");
    printf("["RED"3"UNDO"] Go South"ANSI_COLOR_RESET"\n");
    printf("["RED"4"UNDO"] Go Middle"ANSI_COLOR_RESET"\n");*/
sleep(5500);
//POTIONS: //

  
//GOLD: //

   break;
  
   case '2' :
   
   Credits();
 
   break;
  
   case '0':
   exit(0);

   break; 
   
   case '3':
   printf("");
   char line255[255];
   FILE * filecheck =fopen("Progress.txt", "r");
   fgets(line255,255,filecheck);
   printf("%s",line255);
   fclose(filecheck);
   if(strcmp(line255, "Progress: 10")==0){
     goto CHECKPOINT1;
   }else if (strcmp(line255, "Progress: 20")==0){
      goto CHECKPOINT2;
   }
   else if(strcmp(line255, "Testing")==0){
     goto CHECKPOINT3;
   }
   else if(strcmp(line255,"Progress: P1")==0){
     goto CHECKPOINTP1;
   }
   else if(strcmp(line255,"Progress: P2")==0){
     goto CHECKPOINTP2;
   }
  }   
  


END:
sleep(5500);
 system("setterm -bold on");
 system("clear");
 printf(ANSI_COLOR_RED"SEE YOU LATER..."ANSI_COLOR_RESET);
 system("setterm -bold off");
return 0; 

}



int Map2LevelAndUp(int Split,char Name[20], int Mana,int Health, int Stamina, int Armor, int Damage,int *Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion, int Gold,char Tribe[],int VarityOfItems,int LeveLNow,int experiences, int GoBack1){
Again:  
  system("clear");  /* clears the console screen */
  char option;
  char liness[255];
 
  PrintfGraphics("Map.txt",23);

    printf("\n""["RED"1"UNDO"] Go North"ANSI_COLOR_RESET"\n");
    printf("["RED"2"UNDO"] Go East"ANSI_COLOR_RESET"\n");
    printf("["RED"3"UNDO"] Go South"ANSI_COLOR_RESET"\n");
    printf("["RED"4"UNDO"] Go Middle"ANSI_COLOR_RESET"\n");
  
  END:


  sleep((float)0.5);
  return GoBack1;
}

int Bag1(char Bag[],int VarityofItems,int LeveLNow,int Split,char Name[20], int Mana,int Health, int Stamina, int Armor, int Damage,int *Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion, int Gold,char Tribe[15],int VarityOfItems,int LeveL, int Experience,int GoBack1){
  char option;
  char Lines[255];
  FILE * fBag = fopen(Bag, "r");
  for(int k=0; k<VarityofItems+3; k++){
    fgets(Lines,255,fBag);
    printf("%s",Lines);
  }

return GoBack1;
END:
sleep(1);

}

void PrintfGraphics(char Name[],int LinesCount){
char liness[255];

FILE * Fprint = fopen(Name,"r");
  for(int i=0; i<LinesCount; i++){  
    fgets(liness,255,Fprint);  
    printf("                  %s",liness);  
  }

  /* printing Ascii Art to the screen */

}

 int Shop(int Split,char Name[20], int *Mana,int *Health, int Stamina, int *Armor, int *Damage,int Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion, int *Gold,char Tribe[],int VarityOfItems,int LeveLNow,int experiences, int GoBack1, int FirstTimeShop, int *SouthDone, int *NorthDone,int *MiddleDone, int *EastDone,int Gold1, struct ArmorPerson *p,struct Values *v){
  
  int tchoice,true1=0,trigger=0;
  int choice1,choice2,choice3,choice4,firstTime=0,MapDirector;
  char liness[255];  
  //structs gia ta potions
  struct Potion smallhealth;
  struct Potion mediumhealth;
  struct Potion smallmana;
  struct Potion mediummana;
  smallhealth.amount = 10;
  mediumhealth.amount = 10;
  smallmana.amount = 10;
  mediummana.amount = 10;


  //structs gia armor(mporeis na alla3eis na onomata sths metablhtes gia na mhn se mperdeuoun)
  struct Armor a1;
  struct Armor a2;
  struct Armor a3;
  strcpy(a1.name,BOLD_YELLOW"Golden"UNDO" ChestPlate");
  strcpy(a2.name,BOLD_YELLOW"Golden"UNDO" Helmet");
  strcpy(a3.name,BOLD_YELLOW"Golden"UNDO" Boots");
  a1.amount = 1;
  a2.amount = 1;
  a3.amount = 1;
  
                          //Input Armour to the Bag.
 FILE * fArmour = fopen("Bag.txt","a");
                         //Graphics for Shop opener.
 FILE * fShop = fopen("Shop.txt","r"); 
                        
                         //structs gia ta weapons
  struct Weapons w1;
  struct Weapons w2;
  struct Weapons w3;
  strcpy(w1.name,"Golden Bow");
  strcpy(w2.name,"Golden Knife");
  strcpy(w3.name,"Golden Gun");


  
  
  SHOP:
  system("clear");
  
  PrintfGraphics("Shop.txt",16);
printf("\n        -------------------------------------------------------------\n");
if( FirstTimeShop > 0){
printf("                 ↠ This is your main (hub) area.");
printf("\n                 ↠ When your done with a direction");
printf("\n                 ↠ You walk back in here to select another..");
printf("\n                 ↠ Every time you go to a direction a Quest Appears.\n\n");
}
//------------------------------------------//
printf(CYAN"                 Shopkeeper"UNDO": Hello %s. What would you like to buy?\n",Name);
printf("                 1. Potions\n");
printf("                 2. Armor\n");
if(FirstTimeShop == 0){
printf("                 3. Leave");
}else if(FirstTimeShop > 0){
printf("\n\n                 ["RED"3"UNDO"] Map");
}

printf("\n        -------------------------------------------------------------\n");

 do{

  scanf("%i",&choice1);

 }while(choice1!=1 &&choice1!=2&&choice1!=3);


  while(trigger==0){
   if(choice1 == 1){
    POTIONS: 
    system("clear");
   PrintfGraphics("Shop.txt",16);
    printf("\n        -------------------------------------------------------------\n");
    printf("                 1. "RED"Health Small"UNDO" Potion(%i)\t20"YELLOW" gold"UNDO"(each)\n",smallhealth.amount);
    printf("                 2."RED" Mana Small"UNDO" Potion(%i)\t15"YELLOW" gold"UNDO"(each)\n",mediumhealth.amount);
    printf("                 3."BLUE" Health Large"UNDO" Potion(%i)\t35"YELLOW" gold"UNDO"(each)\n",smallmana.amount);
    printf("                 4."BLUE" Mana Large"UNDO" Potion(%i)\t25"YELLOW" gold"UNDO"(each)\n\n",mediummana.amount);
    printf(YELLOW"        Gold"UNDO": %i\n\n",Gold1);
    printf("                 5. Back");
    printf("\n        -------------------------------------------------------------\n");
      do{

      scanf("%i",&choice2);

      }while(choice2!=1 &&choice2!=2&&choice2!=3&&choice2!=4&& choice2!=5);
     
        if(choice2==1){
          system("clear");
          PrintfGraphics("Shop.txt",16);
          printf("\n        -------------------------------------------------------------\n");
         
          printf(CYAN"                 Shopkeeper"UNDO": How many would u like to buy?(Type a number from 0 to %i)\n",smallhealth.amount);
         
          printf(RED"                 Small Health"UNDO" Potion(%i)\t20"YELLOW" gold"UNDO"(each)\n",smallhealth.amount);
          printf(YELLOW"\n        Gold"UNDO": %i",Gold1);
          printf("\n        -------------------------------------------------------------\n");
       
        do{
          
            scanf("%i",&tchoice);
            if(tchoice<0||tchoice>smallhealth.amount){
              printf(CYAN"                 Shopkeeper"UNDO": I dont have this many.Sorry.\n >");
              true1=1;}
             else{
              printf(CYAN"                 Shopkeeper"UNDO": Alright.  %i Potion(s) coming right now!\n",tchoice);
               sleep(2);
               true1=0;}

           if(Gold1 >= tchoice *20){
              smallhealth.amount = smallhealth.amount - tchoice;
              *Health_Potion += tchoice;
              Gold1 -= tchoice * 20;
              *Gold -= tchoice * 20;
          } else{
             printf("                 You dont have enough "YELLOW"balance"UNDO);
              printf("\n");
              printf("\n");
              sleep(3); 
        }
        }while(true1==1);
        goto POTIONS;
        
        }
        else if(choice2==2){
          system("clear");
          PrintfGraphics("Shop.txt",16);
          printf("\n        -------------------------------------------------------------\n");
          printf(CYAN"                 Shopkeeper"UNDO": How many would u like to buy?(Type a number from 0 to %i)\n",smallmana.amount);
          printf(RED"                 Small Mana"UNDO" Potion(%i)\t35"YELLOW" gold"UNDO"(each)\n",smallmana.amount);
          printf(YELLOW"\n        Gold"UNDO": %i",Gold1);
          printf("\n        -------------------------------------------------------------\n");
        do{
          
          scanf("%i",&tchoice);
          if(tchoice<0||tchoice>smallmana.amount){
            printf(CYAN"                 Shopkeeper"UNDO": I dont have this many.Sorry.\n >");
           true1=1;}
          else{
           printf(CYAN"                 Shopkeeper"UNDO": Alright.  %i Potion(s) coming right now!\n",tchoice);
           sleep(2);
          if(Gold1 >= tchoice *35){
            smallmana.amount = smallmana.amount - tchoice;
            *Mana_Potion += tchoice;
            Gold1 -=tchoice*35;
            *Gold -= tchoice *35;
          }else{
          printf("                 You dont have enough "YELLOW"balance"UNDO);
          printf("\n");
          printf("\n");
          sleep(3); 
        }
          true1=0;}

        }while(true1==1);
        goto POTIONS;
        
        }
        else if(choice2==3){
        system("clear");
       PrintfGraphics("Shop.txt",16);
       printf("\n        -------------------------------------------------------------\n");
        printf(CYAN"                 Shopkeeper"UNDO": How many would u like to buy?(Type a number from 0 to %i)\n",mediumhealth.amount);
        printf(CYAN"                 Large Health"UNDO" Potion(%i)\t15"YELLOW" gold"UNDO"(each)\n",mediumhealth.amount);
        printf(YELLOW"\n        Gold"UNDO": %i",Gold1);
        printf("\n        -------------------------------------------------------------\n");
        do{
          
          scanf("%i",&tchoice);
          if(tchoice<0||tchoice>mediumhealth.amount){
            printf(CYAN"                 Shopkeeper"UNDO": I dont have this many.Sorry.\n >");
           true1=1;}
          else{
           printf(CYAN"                 Shopkeeper"UNDO": Alright.  %i Potion(s) coming right now!\n",tchoice);
           sleep(2);
        if(Gold1 >= tchoice * 15){ 
           mediumhealth.amount = mediumhealth.amount - tchoice;
           Gold1 -=tchoice*15;
           *Gold -= 15 * tchoice;
           true1=0;
           *Large_Health_Potion+= tchoice;
        }else{
          printf("                 You dont have enough "YELLOW"balance"UNDO);
          printf("\n");
          printf("\n");
          sleep(3); 
        }
        }
        }while(true1==1);
        goto POTIONS;
        
        }
        else if(choice2==4){
        system("clear");
       PrintfGraphics("Shop.txt",16);
        printf("\n        -------------------------------------------------------------\n");
        printf(CYAN"                 Shopkeeper"UNDO": How many would u like to buy?(Type a number from 0 to %i)\n",mediummana.amount);
        printf(BLUE"                 Large Mana"UNDO" Potion(%i)\t25"YELLOW" gold"UNDO"(each)\n",mediummana.amount);
        printf(YELLOW"\n        Gold"UNDO": %i",Gold1);
       printf("\n        -------------------------------------------------------------\n");
        do{
          
          scanf("%i",&tchoice);
          if(tchoice<0||tchoice>mediummana.amount){
            printf(CYAN"                 Shopkeeper"UNDO": I dont have this many.Sorry.\n >");
           true1=1;}
          else{
           printf(CYAN"                 Shopkeeper"UNDO": Alright.  %i Potion(s) coming right now!\n",tchoice);
           sleep(2);
          if(Gold1 >= tchoice*25){ 
          mediummana.amount = mediummana.amount - tchoice;
          Gold1 -=tchoice*25;
          *Gold -= 25 * tchoice;
          true1=0;
          *Large_Mana_Potion += tchoice;
          }else{
           printf("                 You dont have enough "YELLOW"balance"UNDO);
            printf("\n");
            printf("\n");
            sleep(3);
          }
          }
          
          
        }while(true1==1);
        goto POTIONS;
        
        }
        else{goto SHOP;
        }

   }else if(choice1 == 2){
    ARMOR: 
     system("clear");
   PrintfGraphics("Shop.txt",16);
    printf("\n        -------------------------------------------------------------\n");
     //EDW GIA NA PROSTHESW KAI ALLES PANOPLIES(kai gia allagh sta onomata)
     printf("                 1.%s(%i)\t 40"YELLOW" gold"UNDO"\n",a1.name,a1.amount);    //
     printf("                 2.%s(%i)\t     40"YELLOW" gold"UNDO"\n",a2.name,a2.amount);    //tis times tis allazw opws 8elw
     printf("                 3.%s(%i)\t     40"YELLOW" gold"UNDO"\n",a3.name,a3.amount);    //anamesa sto Back kai ta alla bazw kai alla armor gears to Back panta sto telos
     printf("\n                 4.Back");
     printf(YELLOW"\n\n        Gold"UNDO": %i",Gold1);
     printf("\n        -------------------------------------------------------------\n");
      do{
       scanf("%i",&choice3);

      }while(choice3 !=1 && choice3 !=2 && choice3 != 3 && choice3 != 4);//ama balw kai alles epiloges bazw kai ton antoistixw ari8mo

     if(choice3==1){                                                          //
       system("clear");                                                       //
      printf("\n        -------------------------------------------------------------\n");  //
      printf(CYAN"Shopkeeper"UNDO": Are you sure you want to buy this?\n");   //
      printf("1. Yes\n");                                                     //
      printf("2. No\n");                                                      //
      printf("\n        -------------------------------------------------------------\n");//
      do{                                                                     //
        scanf("%i",&tchoice);                                                 //
      }while(tchoice != 1 && tchoice != 2);                                   //
                                                                              
       if(tchoice == 1){                                                      //  copy pasta codikas mou otan balw kai alles epiloges(mhn 
         if(a1.amount>0){                                                     //  3exasw ELSE IF sthn arxh gia ka8e copy)
        printf(CYAN"                 Shopkeeper"UNDO": Alright.\n");          if(Gold1 >= 40){             
        a1.amount = a1.amount - 1;             

        *Armor -= (p->stats.ChestArmor);     
        *Health -= (p->stats.ChestHealth);
        *Mana -= (p->stats.ChestMana);
        
        Gold1 -= 40;
        *Gold -= 40;
        
        p->stats.ChestArmor = (v->GoldenArmor);
        p->stats.ChestHealth = (v->GoldenHealth);
        p->stats.ChestMana = (v->GoldenMana);
        
        *Armor += (p->stats.ChestArmor);     
        *Health += (p->stats.ChestHealth);
        *Mana += (p->stats.ChestMana);       
               
                    //
        printf(YELLOW"                 %s Received!"UNDO,a1.name);    
          //-------------inserting the Armour-------------//  
          strcpy(p->ChestPlatep,a1.name);
          //---------------------------------------------// 
        printf("\n\n");  
        sleep(3);                                                             //

        goto ARMOR;                                          }else{
        printf("                 You dont have enough "YELLOW"balance"UNDO); 
        printf("\n");
        printf("\n");
           sleep(3);
           goto ARMOR;           //
        } 
         }                                                                    //
         else{                                                                //
           printf(CYAN"                 Shopkeeper"UNDO": Sorry I dont have it on stock");     //
          goto ARMOR;                                                         //
         }                                                                    //
       }                                                                      //


     }                                                                        //
     
    else if(choice3==2){//
       system("clear");
      printf("\n        -------------------------------------------------------------\n");
      printf(CYAN"                 Shopkeeper"UNDO": Are you sure you want to buy this?\n");
      printf("                 1. Yes\n");
      printf("                 2. No\n");
      printf("\n        -------------------------------------------------------------\n");
      do{
        scanf("%i",&tchoice);
      }while(tchoice != 1 && tchoice != 2);
  
       if(tchoice == 1){
         if(a2.amount>0){//
        printf(CYAN"                 Shopkeeper"UNDO": Alright.\n");
        if(Gold1 >= 40){
        a2.amount = a2.amount - 1;//
        printf(YELLOW"                 %s Received!"UNDO,a2.name);//
        printf("\n\n");  
        sleep(2);
        *Armor -= p->stats.HelmetArmor;     
        *Health -= p->stats.HelmetHealth;
        *Mana -= p->stats.HelmetMana;
        
        Gold1 -= 40;
        *Gold -= 40;
        
        p->stats.HelmetArmor = v->GoldenArmor;
        p->stats.HelmetHealth = v->GoldenHealth;
        p->stats.HelmetMana = v->GoldenMana;
        
        *Armor += p->stats.HelmetArmor;     
        *Health += p->stats.HelmetHealth;
        *Mana += p->stats.HelmetMana;       
               
        //------------------------inserting the Armour
                  strcpy(p->Helmet,a2.name);             //
        //-----------------------------------------------//
        goto ARMOR;
        }else{
        printf("                 You dont have enough "YELLOW"balance"UNDO);
         printf("\n");
        printf("\n");
        sleep(3);
        goto ARMOR;
        }  
         }
         else{
           printf(CYAN"                 Shopkeeper"UNDO": Sorry I dont have it on stock");
          goto ARMOR;
         }
       }


     }

      else if(choice3==3){//
       system("clear");
        printf("\n        -------------------------------------------------------------\n");
        printf(CYAN"                 Shopkeeper"UNDO": Are you sure you want to buy this?\n");
        printf("                 1. Yes\n");
        printf("                 2. No\n");
        printf("\n        -------------------------------------------------------------\n");
        do{
        scanf("%i",&tchoice);
        }while(tchoice != 1 && tchoice != 2);
  
        if(tchoice == 1){
         if(a3.amount>0){//
          printf(CYAN"                 Shopkeeper"UNDO": Alright.\n");
          if(Gold1 >= 40){
            a3.amount = a3.amount - 1;//
            printf(YELLOW"                 %s Received!"UNDO,a3.name);//
            printf("\n\n");  
            sleep(2);
            *Armor -= p->stats.BootsArmor;     
            *Health -= p->stats.BootsHealth;
            *Mana -= p->stats.BootsMana;
        
            Gold1 -= 40;
            *Gold -= 40;
        
            p->stats.BootsArmor = v->GoldenArmor;
            p->stats.BootsHealth = v->GoldenHealth;
            p->stats.BootsMana = v->GoldenMana;
        
            *Armor += p->stats.BootsArmor;     
            *Health += p->stats.BootsHealth;
            *Mana += p->stats.BootsMana;       
             //inserting the Armour: //
            strcpy(p->Boots,a3.name);
            //----------------------//
            goto ARMOR;
        }   else{
              printf("                 You dont have enough"YELLOW"balance"UNDO);
              printf("\n");
              printf("\n");
              sleep(3); 
          goto ARMOR; 
        } 
         }
         else{
             printf(CYAN"                 Shopkeeper"UNDO": Sorry I dont have it on stock");
          goto ARMOR;
         }
       }


     }else if(choice3== 4){
       goto SHOP;
     }
   }else if(choice1 == 3){
    trigger = 1;
    if(FirstTimeShop > 0){
    Map2LevelAndUp(Split, Name, *Mana, *Health, Stamina, *Armor, *Damage, &Result, Mana_Potion, Health_Potion, Large_Mana_Potion, 
    Large_Health_Potion, *Gold, Tribe, VarityOfItems,LeveLNow, experiences, GoBack1);
    printf("\n>");
    
AgainMap:
    do{
    scanf("%i",&MapDirector);
    
    }while(MapDirector != 1 && MapDirector != 2 && MapDirector != 3 && MapDirector != 4);
     
    if(MapDirector == 1){
        if(*(NorthDone) == 0){
          GoNorth(Split,Name,*Mana,*Health,Stamina,*Armor,*Damage,Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,Gold,Tribe,VarityOfItems,LeveLNow,Split,&experiences, GoBack1,NorthDone,"Statics.txt",p);
    }else {
      printf("\n You've already been there!");
      printf("\n");
      sleep(3);
      goto AgainMap;
    }
    }
   else if(MapDirector == 2 && (*NorthDone == 1 && *EastDone == 1 && *SouthDone == 1 && *MiddleDone == 1)){
    GoEast(Name,Split);
    }
    else if(MapDirector == 2 &&(*(NorthDone) == 0 || *(EastDone) == 0 || *(SouthDone) == 0 || *(MiddleDone) == 0)){
      printf("\n\nYou must first finish all the other "BOLD_MAGENTA"Quests "UNDO"to go.");
      goto AgainMap;    
    }
    else if(MapDirector == 3){
      if(*(SouthDone) == 0){
          GoSouth(Split,Name,Mana,Health,Stamina,Armor,Damage,&Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,Gold,Tribe,VarityOfItems,LeveLNow,Split,&experiences, GoBack1,SouthDone,"Statics.txt",p,v);
    }
    else {
      printf("\n You've already been there!");
      printf("\n");
      sleep(3);
      goto AgainMap;
    }
    }else if(MapDirector == 4){
      if(*MiddleDone == 0){
     GoMiddle(Split,Name,Mana,Health,&Stamina,Armor,Damage,Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,Gold,Tribe,VarityOfItems,LeveLNow,Split,&experiences, GoBack1,MiddleDone,p,v);

      printf("LHP: %i",*(Large_Health_Potion));
      printf("LMP: %i",*(Large_Mana_Potion));
      printf("HP: %i",*(Health_Potion));
      printf("MP: %i",*(Mana_Potion));
      printf("\n\n");
    sleep(3);
      }
      else{
         printf("\n You've already been there!");
        printf("\n");
        sleep(3);
        goto AgainMap;   
    }
      } 

    }else 
     printf(CYAN"                      Shopkeeper"UNDO": GoodBye %s.",Name);
 }

 sleep(3);
  
}
 //Allazw to Stranger me th metablhth tou onomatos tou paixth
 
  printf("\n");
  printf("\n");
  sleep(3);
 system("clear"); 
  return *Gold;
  return *Armor;

// int *Mana_Potion, int *Health_Potion, int *Large_Health_Potion, int *Large_Mana_Potion, int *Armor


}

void SearchForLoot(int *Mana_Potion,int *Health_Potion,int *Large_Mana_Potion,int *Large_Health_Potion, int Pass){
                      
srand(time(NULL));  /* <-- it generates a random number every-time */

int RandomNumber = rand()%4 + 1; /* <--  random number */ 

if( Pass == 0 ){
  printf(ANSI_COLOR_RED"\n\n ↠ Searching.."ANSI_COLOR_RESET);
  printf("\n");
  sleep((float)2.5);

if(RandomNumber == 1){
  
  printf("↠ You found a "BLUE"Mana Potion"UNDO);
  *Mana_Potion =+1 ;

}
else if(RandomNumber == 2){

  printf("↠ You found a "GREEN"Health Potion"UNDO);  
  *Health_Potion =+1 ;

}
else if(RandomNumber == 3){

  printf("↠ You found a "BLUE"Large Mana Potion"UNDO);  
  *Large_Mana_Potion =+1 ;

}
else if(RandomNumber == 4){

  printf("↠ You found a "GREEN"Large Health Potion"UNDO);  
  *Large_Health_Potion =+1 ;

}
}else{
 printf("\nYou've Already searched the place! ");
}

printf("\n\n");
sleep(3);
printf("\n\n");


}

void RandomDrop(char Type[],char Value[]){
int numb1 = rand()%4+1;
int numb2 = rand()%4+1;
int numb3 = rand()%4+1;
char output[35];

//Value:
if(numb1 == 4 && numb3 == 4){
  strcpy(Value,BOLD_MAGENTA"Legendary"UNDO);
}
else if(numb1 == 1){
  strcpy(Value,BOLD_RED"Leather"UNDO);
}
else if(numb1 == 2){
  strcpy(Value,BOLD_CYAN"Silver"UNDO);
}
else if(numb1 == 3){
  strcpy(Value,BOLD_YELLOW"Gold"UNDO);
}
else if(numb1 == 4){
  strcpy(Value,BOLD_RED"Leather"UNDO);
}


//Type:
if(numb2 == 1){
  strcpy(Type," Helmet");
}
else if(numb2 == 2){
  strcpy(Type," ChestPlate");
}
else if(numb2 == 3){
  strcpy(Type," Leggings");
}
else if(numb2 == 4){
  strcpy(Type," Boots");
}



}

void AfterBattle(int Result, int *Experiences, int *gold, int addGold, int addxp,struct ArmorPerson *p,int *Large_Health_Potion, int *Large_Mana_Potion,struct Values *v,char Tribe[35],int *Damage,int *Health, int *Armor, int *Mana,int LeveL){
system("clear");
printf("\n\n");
sleep(4);
char Type[35], Value[35],Type1[35],Value1[35],DefeatedPotion = 0;
RandomDrop(Type, Value);

int randomNum = rand()%3+1;
int randomPotion = rand()%2+1;
char choice;
PrintfGraphics("Box.txt",19);
printf("\n     -----------------------------------------------------------------------------------");

if(Result == 1){
  *(gold)+=addGold;
  *(Experiences) += addxp;
  system("setterm - bold on");
  printf("\n     ✔ You Received "BOLD_GREEN"+ %i"UNDO" Experiences",addxp);
  printf("\n     ✔ You Received "BOLD_GREEN"+"UNDO" "BOLD_YELLOW"%i Gold"UNDO,addGold);
  printf("\n\n\n     ➤  "BOLD_CYAN"Item Drop"UNDO":  %s%s",Value,Type);
  printf("\n\n     ["BOLD_RED"p"UNDO"] Pick Up");
  printf("\n     ["BOLD_RED"e"UNDO"] Exit");
  printf("\n >");
  scanf("\n%c",&choice);
  while(choice != 'p' && choice != 'e'){
    printf(RED"\nInvalid"UNDO" Choice.");
    printf("Type again.");
    printf("\n >");
    scanf("\n%c",&choice);
  }
  if(choice == 'p'){
    printf("\n\n");
    sleep((float)0.4);
    system("clear");
    ArmorPicked(Type,Value,p,v,Tribe,Damage,Health,Mana,Armor);
    PrintfGraphics("Box.txt",19);
    printf("\n     -----------------------------------------------------------------------------------");
  }

if(randomNum == 2 || randomNum == 3){
  RandomDrop(Type1, Value1);
  system("setterm - bold on");
  printf("\n\n\n     ➤  "BOLD_CYAN"Item Drop"UNDO":  %s%s",Value1,Type1);
  printf("\n\n     ["BOLD_RED"p"UNDO"] Pick Up");
  printf("\n     ["BOLD_RED"e"UNDO"] Exit");
  printf("\n >");
  scanf("\n%c",&choice);
  while(choice != 'p' && choice != 'e'){
    printf(RED"\nInvalid"UNDO" Choice.");
    printf("Type again.");
    printf("\n >");
    scanf("\n%c",&choice);
  }
  if(choice == 'p'){
    printf("\n\n");
    sleep((float)0.4);    
    system("clear");
    ArmorPicked(Type1,Value1,p,v,Tribe,Damage,Health,Mana,Armor);
    PrintfGraphics("Box.txt",19);
    printf("\n     -----------------------------------------------------------------------------------");
  }  
  if(randomNum == 3){
    if(randomPotion == 1){
    printf("\n\n     ➤  "BOLD_CYAN"Item Drop"UNDO": Large "BOLD_GREEN"Health Potion"UNDO);
    }else{
      printf("\n     ➤  "BOLD_CYAN"Item Drop"UNDO": Large "BOLD_BLUE"Mana Potion"UNDO);  
    }
  }
}


}
else if(Result == 0){
  printf("\n\n ✘ Items didnt drop.");
  printf("\n\nSearching for last "BOLD_GREEN"Checkpoint"UNDO);
  printf("\n\nYou gained 1 Large "BOLD_GREEN"Health Potion for dieing"UNDO".");  
  if(DefeatedPotion == 0){
  *Large_Health_Potion+=1;
  }
  printf("\n");
}

Exit:
sleep(2);
TypeAnything();
}

int GoingBackFromBosses(int *Experiences, int *Damage, int *Armor, int *Mana, int *Health, int *Large_Health_Potion,int ExperiencesGiveMonster,int ExperiencesGiveQuest,int *Gold,int GiveGold){

  printf("\n     ✔ Rewards:");
  printf("\n     •Item Drop: "ANSI_COLOR_GREEN"Large Health Potion"ANSI_COLOR_RESET"! \n");
  printf("     •Experiences: +"ANSI_COLOR_GREEN" %i"UNDO,ExperiencesGiveMonster);

  *Experiences += ExperiencesGiveMonster;
 
 printf("\n\n\n\n     ✔ Quest has been "ANSI_COLOR_GREEN"Completed."ANSI_COLOR_RESET);
 printf("\n     •Rewards: + %i "ANSI_COLOR_YELLOW"Gold"ANSI_COLOR_RESET,GiveGold); 
 printf("\n     •Experiences: "ANSI_COLOR_GREEN"+ %i"ANSI_COLOR_RESET"!",ExperiencesGiveQuest);
 
 TypeAnything();
 *(Gold) += GiveGold;

 *(Experiences) += ExperiencesGiveQuest;
 *(Experiences) += ExperiencesGiveMonster;

return *Large_Health_Potion;
return *Experiences;
return *Gold;
}



int Splitting(char Name[],int *Split){
  int choice;
  PrintfGraphics("Splitting.txt",25);
  printf("\n[Josh]: Ok %s..do you want to split or stay together? ",Name);
  sleep(2);
  printf("\n\n["RED"1"UNDO"] Together");
  sleep(3);
  printf("\n["RED"2"UNDO"] Split");
  printf("\n>");
  scanf("%i",&choice);
  if(choice == 1){
    *Split = 0;
    printf("[Josh]: Hmm Alright, lets go then to the middle of the map."); 
  }else if(choice == 2){
    *Split = 1;
    printf("[Josh]: Ok,choose a side and ill go a different one.");
  }
  printf("\n");
  sleep(4);
  
return *Split;
}

int Battles(int Mana, int Health, int Stamina, int Armor, int Damage,char FileMonster[25], int sizeMonster, char FileSkills[25], int sizeSkills, int *Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,char MonsterName[25], int Monster_Health, int DamageMax, int DamageMin, int LeveL,int lineon){
  
   struct Monster monster;
   monster.health = Monster_Health;
   monster.damage = rand()%DamageMax + DamageMin;
   

   int POTION_MANA = 0;
   int POTION_HEALTH = 0;
   int POTION_AMOUNT = 0;

   int WALLS = 2;
   char option;
   int RandomDamagePlayer; 
   int FirstTime = 1;
   int ActivatedWalls = 0;
   int GoBack = 0;
   int DamageBlocked = 0;

  BATTLE: 
  system("clear");
 while(Health > 0 && monster.health > 0){
   //MONSTER STATS: //
   char getLines[255];
   FILE * fMonster = fopen(FileMonster, "r");
   for(int k=0; k <sizeMonster; k++){
     fgets(getLines, 255, fMonster);
     printf("                         %s",getLines);
   }  
   if(GoBack == 1 ){
     if(DamageBlocked == 1){
      printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i "ANSI_COLOR_RED"-%i"ANSI_COLOR_RESET"",monster.health,RandomDamagePlayer);  
      DamageBlocked--;      
     }
     else if(DamageBlocked == 0){
      printf("\n\n"ANSI_COLOR_GREEN"        Health"ANSI_COLOR_RESET": %i""",monster.health);  
     }
   
   }   
   else if(POTION_HEALTH == 1 || POTION_MANA == 1){
    printf("\n\n"ANSI_COLOR_GREEN"        Health"ANSI_COLOR_RESET": %i""",monster.health);  
   } 
   else if(FirstTime == 1 && ActivatedWalls == 0){ 
    printf("\n\n"ANSI_COLOR_GREEN"        Health"ANSI_COLOR_RESET": %i",monster.health);
  }else if(FirstTime ==0 && ActivatedWalls == 0){
    printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i "ANSI_COLOR_RED"-%i"ANSI_COLOR_RESET"",monster.health,RandomDamagePlayer); 
  } else if(FirstTime == 0 && ActivatedWalls == 1){
    printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i",monster.health);
  }else if(WALLS == 2){
    printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i",monster.health);
  }
if(lineon == 1){
  printf("\n        -----------------------------------------------------------");
}  
  //PLAYER STATS: //
   char getLineName[255];
   FILE * fName = fopen("Name.txt", "r");
   fgets(getLineName, 255, fName);
   printf("\n\n        p) %s", getLineName);
  if(GoBack == 1){
  printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i\n",Health);
  printf(""ANSI_COLOR_BLUE"        Mana"ANSI_COLOR_RESET": %i\n\n\n",Mana); 
  GoBack = 0;
  } 
  else if(POTION_HEALTH == 1){
  printf  ("\n"ANSI_COLOR_GREEN"        Health"ANSI_COLOR_RESET": %i "ANSI_COLOR_GREEN"+%i"""ANSI_COLOR_RESET"",Health,POTION_AMOUNT);  
  printf(""ANSI_COLOR_BLUE"\n        Mana"ANSI_COLOR_RESET": %i\n\n\n",Mana);
   POTION_HEALTH = 0;
   POTION_AMOUNT = 0;
   }else if(POTION_MANA == 1){
    printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i\n",Health);
    printf(""ANSI_COLOR_BLUE"        Mana"ANSI_COLOR_RESET": %i "ANSI_COLOR_GREEN"+%i"""ANSI_COLOR_RESET"""\n\n\n",Mana,POTION_AMOUNT); 
    POTION_MANA = 0;
    POTION_AMOUNT = 0;
  } 
  else if(FirstTime == 1 && ActivatedWalls == 0){
   printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i\n",Health);
  FirstTime --;
  printf(""ANSI_COLOR_BLUE"        Mana"ANSI_COLOR_RESET": %i\n\n\n",Mana);
  }else if(FirstTime == 0 && ActivatedWalls == 0){
    printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i "ANSI_COLOR_RED"-%i"ANSI_COLOR_RESET"",Health,monster.damage -(Armor/2)); 
    printf(""ANSI_COLOR_BLUE"\n        Mana"ANSI_COLOR_RESET": %i\n\n",Mana);
  } else if(FirstTime == 0 && ActivatedWalls ==1){
     printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i "ANSI_COLOR_GREEN"+%i (-%i)"ANSI_COLOR_RESET"\n",Health,15, monster.damage);
     printf(""ANSI_COLOR_BLUE"        Mana"ANSI_COLOR_RESET": %i "ANSI_COLOR_GREEN"+%i"ANSI_COLOR_RESET"\n\n",Mana, 20);
  ActivatedWalls =0;
  }else if(WALLS == 2){
    printf(""ANSI_COLOR_GREEN"\n        Health"ANSI_COLOR_RESET": %i "ANSI_COLOR_GREEN"+%i"ANSI_COLOR_RESET"", Health, 10);
    printf(""ANSI_COLOR_BLUE"\n        Mana"ANSI_COLOR_RESET": %i\n\n",Mana);
    WALLS = 0;
  }

  char getLines1[255];
   FILE* fStats = fopen(FileSkills, "r");
   for(int k=0; k <sizeSkills; k++) {
   fgets(getLines1, 255,fStats);
   printf("        %s", getLines1);
   }
  printf(" (%i)",WALLS);
  //REMAKE DAMAGE: //
   monster.damage = rand()%DamageMax + DamageMin;

  printf("\n>");
  scanf("\n%c", &option);
printf("\n        -----------------------------------------------------\n");
if(LeveL == 1){
  if(option == '1' && Mana >=15){
    //PLAYER: //
    RandomDamagePlayer = rand()%6 + Damage;
    printf("                   Damage Dealt: %i", RandomDamagePlayer);
    monster.health -=RandomDamagePlayer;
    Mana -=15;
    //MONSTER ://
    printf("");
    if(monster.damage -(Armor/2) <= 0){
      GoBack = 1;
      printf("\n                   Monster Damage Dealt: "BOLD_GREEN"BLOCKED"UNDO" by Armour.");  
      DamageBlocked = 1;   
    }
    else{
    printf("\n                   Monster Damage Dealt: %i",monster.damage -(Armor/2));
    sleep((float)1.5);
    Health -=monster.damage -(Armor/2);
    }
    printf("\n");
    sleep((float)2.5);
    goto BATTLE;  
  }else if(option == '2'&& Mana >=15){
     RandomDamagePlayer = rand()%76 + (Damage+25);
   printf("                   Damage Dealt: %i", RandomDamagePlayer);
    monster.health -=RandomDamagePlayer;
    //MONSTER ://
    printf("");
    if(monster.damage -(Armor/2) <= 0){
      GoBack = 1;
      printf("\n                   Monster Damage Dealt: "BOLD_GREEN"BLOCKED"UNDO" by Armour."); 
      DamageBlocked = 1;
    }
    else{
      printf("\n                   Monster Damage Dealt: %i",monster.damage -(Armor/2));
      sleep((float)1.5);
      Health -=monster.damage -(Armor/2);
    }
    printf("\n");
    sleep((float)2.5); 
    Mana -=50;
    goto BATTLE;
  }else if(option =='4' && WALLS > 0){
    Health +=15;
    Mana +=20;
    printf("\n                   PROCECTION WALL "ANSI_COLOR_GREEN"ACTIVATED"ANSI_COLOR_RESET"");
    monster.damage = rand()%6 + 2;
    printf("\n                   Monster Damage Dealt: %i",monster.damage);
     sleep((float)1.5);
    printf("\n");
    sleep((float)2.5);
    WALLS --;
    ActivatedWalls = 1;
    Health -= monster.damage;
    printf("\n");
    printf("");
    goto BATTLE;
  }else if(option == '4' && WALLS==0){
    printf("\n        You've"ANSI_COLOR_MAGENTA" wasted"ANSI_COLOR_RESET" all your Walls..");
    printf("\n");
    printf("\n");
    sleep((float)2.5);
    GoBack = 1;
  goto BATTLE;
  }else if(option == '5' && (LeveL > 1 && Mana >=60)){
    RandomDamagePlayer = rand()%111 + (Damage+55);
    printf("                   Damage Dealt: %i", RandomDamagePlayer);
    monster.health -=RandomDamagePlayer;
    //MONSTER ://
    printf("");
    printf("\n                   Monster Damage Dealt: %i",monster.damage -(Armor/2));
    sleep((float)1.5);
    Health -=monster.damage -(Armor/2);
    printf("\n");
    sleep((float)2.5); 
    Mana -=90;
    goto BATTLE; 
  }
}else if(LeveL > 1){
   if(option == '1' && Mana >=15){
    //PLAYER: //
    RandomDamagePlayer = rand()%6 + Damage;
    printf("                   Damage Dealt: %i", RandomDamagePlayer);
    monster.health -=RandomDamagePlayer;
    Mana -=15;
    //MONSTER ://
    printf("");
    if(monster.damage -(Armor/2) <= 0){
      GoBack = 1;
      printf("\n                   Monster Damage Dealt: "BOLD_GREEN"BLOCKED"UNDO" by Armour."); 
      DamageBlocked = 1;
    }
    else{
      printf("\n                   Monster Damage Dealt: %i",monster.damage -(Armor/2));
      sleep((float)1.5);
      Health -=monster.damage -(Armor/2);
    }  
      printf("\n");
      sleep((float)2.5);
      goto BATTLE;  
  }else if(option == '2'&& Mana >=15){
     RandomDamagePlayer = rand()%76 + (Damage+25);
      printf("                   Damage Dealt: %i", RandomDamagePlayer);
      monster.health -=RandomDamagePlayer;
      //MONSTER ://
      printf("");
      if(monster.damage -(Armor/2) <= 0){
        GoBack = 1;
        printf("\n                   Monster Damage Dealt: "BOLD_GREEN"BLOCKED"UNDO" by Armour."); 
        DamageBlocked = 1;
      }
      else{
      printf("\n                   Monster Damage Dealt: %i",monster.damage -(Armor/2));
      sleep((float)1.5);
      Health -=monster.damage -(Armor/2);
      }
      printf("\n");
      sleep((float)2.5); 
      Mana -=50;
      goto BATTLE;
  }else if(option =='4' && WALLS > 0){
    Health +=15;
    Mana +=20;
    printf("\n                   PROCECTION WALL "ANSI_COLOR_GREEN"ACTIVATED"ANSI_COLOR_RESET"");
    monster.damage = rand()%6 + 2;
    printf("\n                   Monster Damage Dealt: %i",monster.damage);
     sleep((float)1.5);
    printf("\n");
    sleep((float)2.5);
    WALLS --;
    ActivatedWalls = 1;
    Health -= monster.damage;
    printf("\n");
    printf("");
    goto BATTLE;
  }else if(option == '4' && WALLS==0){
  printf("\n        You've"ANSI_COLOR_MAGENTA" wasted"ANSI_COLOR_RESET" all your Walls..");
  printf("\n");
  printf("\n");
  sleep((float)2.5);
  GoBack = 1;
  goto BATTLE;
  }else if(option == '3'){
    RandomDamagePlayer = rand()%111 + (Damage+55);
    
    printf("                   Damage Dealt: %i", RandomDamagePlayer);
    monster.health -=RandomDamagePlayer;
    //MONSTER ://
    printf("");
    if(monster.damage -(Armor/2) <= 0){
      GoBack = 1;
      printf("\n                   Monster Damage Dealt: "BOLD_GREEN"BLOCKED"UNDO" by Armour.");   
      DamageBlocked = 1;
    }
    else{
      printf("\n                   Monster Damage Dealt: %i",monster.damage -(Armor/2));
      sleep((float)1.5);
      Health -=monster.damage -(Armor/2);
    }  
      printf("\n");
      sleep((float)2.5); 
      Mana -=90;
      goto BATTLE; 
  }
}
  if(option == 'p'){
     printf("\n"ANSI_COLOR_CYAN"Potion's Bag:\n"ANSI_COLOR_RESET"");
      printf("1) Mana Potion (%i)\n", *(Mana_Potion));
      printf("2) Health Potion (%i)\n", *(Health_Potion));
      printf("3) Large Mana Potion (%i)\n",*(Large_Mana_Potion));
      printf("4) Large Health Potion (%i)\n",*(Large_Health_Potion));
    
    int optionBag;
    printf("\n\nSelect an item by number.");
    printf("\nOr Type [5] to go back.");
    printf("\n> ");
    scanf("%i", &optionBag);
    if(optionBag ==1 && Mana_Potion > 0){
      printf("\n "ANSI_COLOR_BLUE"Mana +10"""ANSI_COLOR_RESET"");
    Mana += 10;
    *(Mana_Potion)-=1;
    printf("\n");
    printf("\n");
    sleep(3);
    POTION_MANA = 1;
    POTION_AMOUNT = 10;
    goto BATTLE;
    }else if(optionBag ==2 && Health_Potion > 0){
      printf("\n "ANSI_COLOR_GREEN"Health +10"""ANSI_COLOR_RESET"");
    Health += 10;
    *(Health_Potion)=-1;
    printf("\n");
    printf("\n");
    POTION_HEALTH = 1;
    POTION_AMOUNT = 10;
    sleep(3);
    goto BATTLE;  
    }else if(optionBag ==3 && Large_Mana_Potion >0){
    printf("\n "ANSI_COLOR_BLUE"Mana +25"""ANSI_COLOR_RESET"");
    Mana += 25;
    *(Large_Mana_Potion)-=1;
    printf("\n");
    printf("\n");
    sleep(3); 
    POTION_MANA = 1;
    POTION_AMOUNT = 25;
    goto BATTLE; 
    }else if(optionBag ==4 && Large_Health_Potion >0){
      printf("\n "ANSI_COLOR_GREEN"Health +20"""ANSI_COLOR_RESET"");
      Health += 20;
      *(Large_Health_Potion)-=1;
      printf("\n");
      printf("\n");
     sleep(3);
     POTION_HEALTH = 1;
      POTION_AMOUNT = 20;
    goto BATTLE;   
  }else if(optionBag == 5){
    GoBack = 1;
   goto BATTLE;
  }
   else 
   printf("Not a Valid Number!");
   printf("\n");
   printf("\n");
   sleep(2);
   GoBack = 1;
   system("clear");
   goto BATTLE;
  }else 
   printf("Not a Valid Number!");
   printf("\n");
   printf("\n");
   sleep(2);
   system("clear");
    GoBack = 1;
   goto BATTLE;
  if(Mana == 0){
    printf("\nYou dont have any Mana!!!");
    printf("\n");
    printf("\n");
    sleep(2);
    printf("\nMonster Damage Dealt: %i",monster.damage -(Armor/2));
     sleep((float)1.5);
    Health -=monster.damage -(Armor/2);
    printf("\n");
      WALLS = 1;
    goto BATTLE;
  }
  // AFTER BATTLE: //
 }if(Health <= 0){
   system("clear");
   char Line[255];
   FILE *fMonster= fopen(FileMonster, "r");
   for(int k=0; k <sizeMonster; k++){
     fgets(Line, 255, fMonster);
     printf("                 %s", Line);
   }
   if(lineon == 1){
    printf("\n        -------------------------------------------------------\n\n");
   }
    printf(ANSI_COLOR_RED"        You've been defeated by "ANSI_COLOR_RESET"%s",MonsterName);
   
   printf("\n\n\n        Searching for last ["BOLD_GREEN"Checkpoint"UNDO"]"ANSI_COLOR_RESET"");
   sleep((float)3.5);
   printf("\n\n");
   *Result = 0;
   sleep((float)3.5);
   system("clear");
 }else if( Health >= 0){
  system("clear");
   char Line[255];
   FILE *fMonster= fopen(FileMonster, "r");
   for(int k=0; k <sizeMonster; k++){
     fgets(Line, 255, fMonster);
     printf("                       %s", Line);
   }
  if(lineon == 1){ 
   printf("\n        -------------------------------------------------------");
  }
   printf("\n\n        You've defeated "ANSI_COLOR_GREEN"SUCCESSFULLY "ANSI_COLOR_RESET"%s", MonsterName); 
    printf("\n        ["BOLD_RED"Loading"UNDO"]"); 
    printf("\n\n");
   sleep((float)3.5);
   *Result = 1;
 }
return *Result;
 }



 void PlayerInGeneral(char Tribe[], char Name[], char Statics[], int VarityOfItems,int LeveLNow,int Split,int Mana,int Health, int Stamina, int Armor, int Damage,int *Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int *Gold, int *Experiences,int Goback1,int numberOfDirection,struct ArmorPerson *p){
  char option2,option3;
  char option;

    printf(BOLD_GREEN"\n[Tribe]"UNDO" :\n");
    printf("%s\n\n",Tribe);
    printf(BOLD_GREEN"[Name]"UNDO" :");
    printf("\n%s",Name);
    char Lines[255];
    FILE * fStatics = fopen(Statics, "r");
    for(int i=0; i<10; i++){
      fgets(Lines,255,fStatics);
      printf("%s",Lines);  
    }
    sleep(1);

    printf("\nType ["BOLD_RED"b"UNDO"] to open the Bag.");
    printf("\nType ["BOLD_RED"p"UNDO"] to go Back. ");
    printf("\n> ");
    scanf("\n%c", &option2);

  while(option2 != 'p' && option2 != 'b'){
    printf("\n> ");
    scanf("\n%c", &option2);
  }  
  
  if(option2 == 'p'){
      goto End;
  }
  else if(option2 == 'b'){
    Bag(p);
    printf("\n\nType ["BOLD_RED"m"UNDO"] to open the Map");
    printf("\nType ["BOLD_RED"b"UNDO"] to go Back.");
    printf("\n> "); 
    scanf("\n%c", &option3); 
   
    while(option3 != 'm' && option2 != 'b'){
      printf("\n> ");
      scanf("\n%c", &option3);
    }  
   
    if(option3 == 'b'){
      goto End;
    }else if( option3 == 'm'){
      if(LeveLNow >= 2){
        Map2LevelAndUp(Split, Name, Mana, Health, Stamina, Armor, Damage, Result, Mana_Potion, Health_Potion, Large_Mana_Potion, 
        Large_Health_Potion, *Gold, Tribe, VarityOfItems,LeveLNow, *Experiences, Goback1);
        printf("\nType ["BOLD_RED"b"UNDO"] to go Back.");
Start:
      printf("\n> ");
      scanf("\n%c", &option3); 
      
      while(option2 != 'b' && option2 != 1 && option2 != 2 && option2 != 3 && option2 != 4){
        printf("\n> ");
        scanf("\n%c", &option2);
      }  
      
      if(option3 == 'b'){
        goto End;
      }
      else if(option3 == numberOfDirection){
        printf("\nYou are already here.");
        printf("\nYou've got a "BOLD_MAGENTA"Quest"UNDO" to complete.");
        goto Start;
      }
      else{
        printf("\nYou cant travel there right now.");
        printf("\nYou've got a Quest to complete.");
        goto Start;
      }
      }
      else if(LeveLNow == 1){
        MapUnderLevel1("Map.txt", LeveLNow);
      }
      
      }
    
    }

 End:
 printf("");
 
 }

 int LeveLShow(int *LeveLNow,int Level, int Exp){
  char option[1];
  int experiences = Exp;

  if(experiences < 2999){

    printf("\n\n"ANSI_COLOR_GREEN"LeveL"ANSI_COLOR_RESET" : %i\nYou need"ANSI_COLOR_GREEN" %i"ANSI_COLOR_RESET" more to Level up!", Level, 3000 - experiences );

  }else if (experiences > 2999 && experiences < 6999){
  
    printf("\n\n"ANSI_COLOR_GREEN"LeveL"ANSI_COLOR_RESET" : %i\nYou need "ANSI_COLOR_GREEN"%i "ANSI_COLOR_RESET"more to Level up!", Level, 
    7000 - experiences);
  
  }else if(experiences > 6999 && experiences < 10999){
 
    printf("\n\n"ANSI_COLOR_GREEN"Level"ANSI_COLOR_RESET" : %i\nYou need "ANSI_COLOR_GREEN"%i"ANSI_COLOR_RESET" more to Level up!", Level, 12000 - experiences);
  }else if(experiences > 11999 && experiences < 15999){
 
    printf("\n\n"ANSI_COLOR_GREEN"Level"ANSI_COLOR_RESET" : %i\nYou need"ANSI_COLOR_GREEN" %i "ANSI_COLOR_RESET" more to Level up!", Level, 18000 - experiences);
 
  }
    
    printf("\n");
    printf("\n\n> Type [Anything] to Continue: ");
    scanf("\n%c", &option[0]); 
    
    option[0] = 'a'; 
  if(option[0] == 'a'){
    goto END;
  }

  END:
  sleep(1);
return *LeveLNow;
}

int LeveLUpMessage(char Tribe[],int *Damage, int *Health,int *Mana, int *Armor,int GiveMana, int GiveDamage,int GiveHealth,int GiveArmor){
  system("clear");
PrintfGraphics("LeveL up.txt", 10);
printf("\n----------------------------------------------------------\n\n");
system("setterm bold-on");  
printf(ANSI_COLOR_GREEN"                       LEVEL UP!"ANSI_COLOR_RESET);
system("setterm bold-on");  
printf("\n\n↠ Congraulations ");
printf("\n\n\n↠ Depending on your "ANSI_COLOR_MAGENTA"Clash"ANSI_COLOR_RESET" you've got "ANSI_COLOR_GREEN"Extra Values"ANSI_COLOR_RESET"! ");
if(strcmp(Tribe, "WhiteWizard")==0){
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": %i",GiveHealth);
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": %i",GiveArmor);
  *(Health) += GiveHealth;
  *(Armor) += GiveArmor;
  }
 else if(strcmp(Tribe, "BlackWizard")==0){
  printf("\n↠ Extra "ANSI_COLOR_RED"Damage"ANSI_COLOR_RESET": +%i",GiveDamage);
  *(Damage) +=GiveDamage;
}
else if(strcmp(Tribe, "GreyWizard")==0){
  printf("\n↠ Extra "ANSI_COLOR_BLUE"Mana"ANSI_COLOR_RESET": +20");
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +15");
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +15");
  *(Mana)+=20;
  *(Health)+=15;
  *(Armor)+=15;
}
else if(strcmp(Tribe, "RangerNative")==0){
  printf("\n↠ Extra "ANSI_COLOR_RED"Damage"ANSI_COLOR_RESET": +50");
  *(Damage)+=50;
}
else if(strcmp(Tribe, "OcculistNative")==0){
  printf("\n↠ Extra "ANSI_COLOR_BLUE"Mana"ANSI_COLOR_RESET": +20");
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +15");
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +15");
  *(Mana)+=20;
  *(Health)+=15;
  *(Armor)+=15;
}
else if(strcmp(Tribe, "DefenderNative")==0){
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +50");
  *(Health)+=50;
}
else if(strcmp(Tribe, "WaterWarrior")==0){
 printf("\n↠ Extra "ANSI_COLOR_BLUE"Mana"ANSI_COLOR_RESET": +20");
 printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +15");
 printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +15");
 *(Mana)+=20;
 *(Health)+=15;
 *(Armor)+=15;
}
else if(strcmp(Tribe, "FireWarrior")==0){
  printf("\n↠ Extra "ANSI_COLOR_RED"Damage"ANSI_COLOR_RESET": +50");
  *(Damage)+=50;
}
else if(strcmp(Tribe, "EarthWarrior")==0){
  printf("\n↠ Extra "ANSI_COLOR_GREEN"Health"ANSI_COLOR_RESET": +50");
  printf("\n↠ Extra "ANSI_COLOR_CYAN"Armor"ANSI_COLOR_RESET": +10");
  *(Health)+=50;
  *(Armor)+=10;
}
char option4[1];
 printf("\n\n\n\n> Type [Anything] to Continue: ");
      scanf("\n%c", &option4[0]); 
      option4[0] = 'a';
  if(option4[0] == 'a'){
  }


return *Damage;
return *Armor;
return *Health;
return *Mana;
}
/* 

  AfterCheckInput

  you've reached a checkpoint
  
continue: 
  AfterCheckOutput


  */
void AfterCheckInput(int Damage, int Armor, int Mana, int Health, int Experience, int Health_Potion, int Mana_Potion, int Large_Health_Potion, int Large_Mana_Potion, struct ArmorPerson *arm1,char Tribe[],char Name[],int MiddleDone,int SouthDone,int NorthDone,int EastDone){
//char color[25];

//  Opening the files to save stats:  //
FILE * fDamage = fopen("Damage.txt","w");
FILE * fHealth =  fopen("Health.txt","w");
FILE * fArmor = fopen("Armor.txt","w");
FILE * fMana = fopen("Mana.txt","w");
FILE * fExperiences = fopen("Experiences.txt","w");
FILE * fHealth_Potion = fopen("Health_Potion.txt","w");
FILE * fMana_Potion = fopen("Mana_Potion.txt","w");
FILE * fLarge_Health_Potion = fopen("Large_Health_Potion.txt","w");
FILE * fLarge_Mana_Potion = fopen("Large_Mana_Potion.txt","w");

//Tribe: //
FILE *fTribe = fopen("TRIBE.txt","w");

//Name: //
FILE * fName = fopen("Name.txt","w");

FILE * fArmorPerson = fopen("ArmorPerson.txt","w");
FILE * fStatsPersonH = fopen("ArmourStatsH.txt","w");
FILE * fStatsPersonC = fopen("ArmourStatsC.txt","w");
FILE * fStatsPersonL = fopen("ArmourStatsL.txt","w");
FILE * fStatsPersonB = fopen("ArmourStatsB.txt","w");
FILE * fStatsPersonW = fopen("ArmourStatsW.txt","w");


// Directions Done: //
FILE * fmd = fopen("MiddleDone.txt","w");
FILE * fnd = fopen("NorthDone.txt","w");
FILE * fsd = fopen("SouthDone.txt","w");


//Inserting into the files the Values that we want: //



/*#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define UNDO "\x1b[0m"*/

// H = HELMET C = CHESTPLATE L = LEGGINGS B = BOOTS WEAPON = W //
//1)Health 2)Armor 3)Mana (for all) - WEAPON 1)Damage 2)Mana//

fprintf(fStatsPersonH,"%i\n%i\n%i",arm1->stats.HelmetHealth,arm1->stats.HelmetMana,arm1->stats.HelmetArmor);
fclose(fStatsPersonH);

fprintf(fStatsPersonC,"%i\n%i\n%i",arm1->stats.ChestHealth,arm1->stats.ChestMana,arm1->stats.ChestArmor);
fclose(fStatsPersonC);

fprintf(fStatsPersonL,"%i\n%i\n%i",arm1->stats.LeggingsHealth,arm1->stats.LeggingsMana,arm1->stats.LeggingsArmor);
fclose(fStatsPersonL);

fprintf(fStatsPersonB,"%i\n%i\n%i",arm1->stats.BootsHealth,arm1->stats.BootsMana,arm1->stats.BootsArmor);
fclose(fStatsPersonB);

fprintf(fStatsPersonW,"%i\n%i",arm1->stats.WeaponDamage,arm1->stats.WeaponMana);
fclose(fStatsPersonW);


// Directions Done: //
fprintf(fmd,"%i",MiddleDone);
fclose(fmd);

fprintf(fsd,"%i",SouthDone);
fclose(fsd);

fprintf(fnd,"%i",NorthDone);
fclose(fnd);

//----------------------------------//
fprintf(fArmorPerson,"%s\n%s\n%s\n%s\n%s",arm1->Helmet,arm1->ChestPlatep,arm1->Leggings,arm1->Boots,arm1->Weapon);
fclose(fArmorPerson);

fprintf(fDamage,"%i",Damage);
fclose(fDamage);

fprintf(fHealth,"%i",Health);
fclose(fHealth);

fprintf(fArmor,"%i",Armor);
fclose(fArmor);

fprintf(fMana,"%i",Mana);
fclose(fMana);

fprintf(fExperiences,"%i",Experience);
fclose(fExperiences);

fprintf(fHealth_Potion,"%i",Health_Potion);
fclose(fHealth_Potion);

fprintf(fMana_Potion,"%i",Mana_Potion);
fclose(fMana_Potion);

fprintf(fLarge_Health_Potion,"%i",Large_Health_Potion);
fclose(fLarge_Health_Potion);

fprintf(fLarge_Mana_Potion,"%i",Large_Mana_Potion);
fclose(fLarge_Mana_Potion);

fprintf(fTribe,"%s",Tribe);
fclose(fTribe);

fprintf(fName,"%s",Name);
fclose(fName);
//---------------------------------------------------//



}

int AfterCheckOutput(int *Damage, int *Armor, int *Mana, int *Health, int *Experiences, int *Health_Potion, int *Mana_Potion, int *Large_Health_Potion, int *Large_Mana_Potion,struct ArmorPerson *pe, char Tribe[],char Name[],int *MiddleDone, int *NorthDone, int *SouthDone){

char Lines[255],Tribee[255];
char LinesValues[255],LinesValues1[255],LinesValues2[255],LinesValues3[255],LinesValues4[255];

// Reading the files to take out the stats: //
FILE * fDamage = fopen("Damage.txt","r"); 
FILE * fHealth =  fopen("Health.txt","r");
FILE * fArmor = fopen("Armor.txt","r");
FILE * fMana = fopen("Mana.txt","r");
FILE * fExperiences = fopen("Experiences.txt","r");
FILE * fHealth_Potion = fopen("Health_Potion.txt","r");
FILE * fMana_Potion = fopen("Mana_Potion.txt","r");
FILE * fLarge_Health_Potion = fopen("Large_Health_Potion.txt","r");
FILE * fLarge_Mana_Potion = fopen("Large_Mana_Potion.txt","r");
FILE * fArmorPerson = fopen("ArmorPerson.txt","r");

FILE * fStatsPersonH = fopen("ArmourStatsH.txt","r");
FILE * fStatsPersonC = fopen("ArmourStatsC.txt","r");
FILE * fStatsPersonL = fopen("ArmourStatsL.txt","r");
FILE * fStatsPersonB = fopen("ArmourStatsB.txt","r");
FILE * fStatsPersonW = fopen("ArmourStatsW.txt","r");

//TRIBE: //
FILE * fTribe = fopen("TRIBE.txt","r");

//NAME: //
FILE *fName = fopen("Name.txt","r");


//Directions Done: //
FILE * fmd = fopen("MiddleDone.txt","w");
FILE * fnd = fopen("NorthDone.txt","w");
FILE * fsd = fopen("SouthDone.txt","w");


//Taking them from FILE as String and saving them as an Integer: //

//Armor for person(only exception):        ------//
for(int k=1; k<=5; k++){
  fgets(Lines,255,fArmorPerson);
  fgets(LinesValues,255,fStatsPersonH);
  fgets(LinesValues1,255,fStatsPersonC);
  fgets(LinesValues2,255,fStatsPersonL);
  fgets(LinesValues3,255,fStatsPersonB);
  fgets(LinesValues4,255,fStatsPersonW);

  CleanNewLine(&Lines);
  CleanNewLine(&LinesValues);
  CleanNewLine(&LinesValues1);
  CleanNewLine(&LinesValues2);
  CleanNewLine(&LinesValues3);
  CleanNewLine(&LinesValues4);

  if(k==1){
    sscanf(LinesValues,"%i",&pe->stats.HelmetHealth);
    sscanf(LinesValues1,"%i",&pe->stats.ChestHealth);
    sscanf(LinesValues2,"%i",&pe->stats.LeggingsHealth);
    sscanf(LinesValues3,"%i",&pe->stats.BootsHealth);
    sscanf(LinesValues4,"%i",&pe->stats.WeaponDamage);
    strcpy(pe->Helmet,Lines);
  }
  else if(k==2){
    sscanf(LinesValues,"%i",&pe->stats.HelmetMana);
    sscanf(LinesValues1,"%i",&pe->stats.ChestMana);
    sscanf(LinesValues2,"%i",&pe->stats.LeggingsMana);
    sscanf(LinesValues3,"%i",&pe->stats.BootsMana);  
    sscanf(LinesValues4,"%i",&pe->stats.WeaponMana);    
    strcpy(pe->ChestPlatep,Lines);
  }
  else if(k==3){
    sscanf(LinesValues,"%i",&pe->stats.HelmetArmor);
    sscanf(LinesValues1,"%i",&pe->stats.ChestArmor);
    sscanf(LinesValues2,"%i",&pe->stats.LeggingsArmor);
    sscanf(LinesValues3,"%i",&pe->stats.BootsArmor);      
    strcpy(pe->Leggings,Lines);
  }
  else if(k==4){
    strcpy(pe->Boots,Lines);
  }
  else if(k == 5){
    strcpy(pe->Weapon,Lines);
  }

}



//-----------------------------------------------//

fscanf(fTribe,"%s",Tribe);
fclose(fTribe);

fgets(Lines,255,fDamage);
sscanf(Lines,"%i",Damage);  /* takes the value of the string and make it into a integer. */
fclose(fDamage);


fgets(Lines,255,fHealth);
sscanf(Lines,"%i",Health);
fclose(fHealth);


fgets(Lines,255,fArmor);
sscanf(Lines,"%i",Armor);
fclose(fArmor);


fgets(Lines,255,fMana);
sscanf(Lines,"%i",Mana);
fclose(fMana);


fgets(Lines,255,fExperiences);
sscanf(Lines,"%i",Experiences);
fclose(fExperiences);


fgets(Lines,255,fHealth_Potion);
sscanf(Lines,"%i",Health_Potion);
fclose(fHealth_Potion);


fgets(Lines,255,fLarge_Health_Potion);
sscanf(Lines,"%i",Large_Health_Potion);
fclose(fLarge_Health_Potion);


fgets(Lines,255,fMana_Potion);
sscanf(Lines,"%i",Mana_Potion);
fclose(fMana_Potion);

fgets(Lines,255,fLarge_Mana_Potion);
sscanf(Lines,"%i",Large_Mana_Potion);
fclose(fLarge_Mana_Potion);

fgets(Lines,255,fName);
sscanf(Lines,"%s",Name);
fclose(fName);


//Directions Done: //
fgets(Lines,255,fmd);
sscanf(Lines,"%i",MiddleDone);
fclose(fmd);

fgets(Lines,255,fsd);
sscanf(Lines,"%i",SouthDone);
fclose(fsd);

fgets(Lines,255,fnd);
sscanf(Lines,"%i",NorthDone);
fclose(fnd);

return *Damage;

}

void ArmorPicked(char Type[], char Value[],struct ArmorPerson *Armor,struct Values *v, char Tribe[], int *Damage, int *Health, int *Mana, int *Armorr){
char Option,choice; 
Again: 
system("clear");
//---------------------  Graphics:  -------------------//
PrintfGraphics("BackPack.txt",15);
printf("\n          -------------------------------------------------\n\n");
char TheType[100];
strcpy(TheType,Type); 

//----If The PLayer picks up Weapon, im Renaming them depending on their Tribe:  //

if(strcmp(Type," Weapon")==0 ){
  if(strcmp(Tribe,"WhiteWizard")== 0 ||strcmp(Tribe,"BlackWizard")==0 ||strcmp(Tribe,"GreyWizard")==0){
  strcpy(TheType," Magick Stick");
}
  else if(strcmp(Tribe,"DefenderNative") == 0 || strcmp(Tribe,"OcculistNative") == 0 || strcmp(Tribe,"RangerNative") ==0 ){
  strcpy(TheType," Bow");
}
  else if(strcmp(Tribe,"WaterWarrior") == 0 || strcmp(Tribe,"FireWarrior") == 0 || strcmp(Tribe,"EarthWarrior") == 0 ){
  strcpy(TheType," Sword");
}

}

printf("\nYou've "BOLD_GREEN"picked up"UNDO": "BOLD_GREEN"%s%s"UNDO"",Value,TheType);

//----------------------------------------------------//

//-----------------  Checking Armor Types:  -------------//
if(strcmp(Type, " Helmet") == 0 || strcmp(Type,"Hood")==0){
  printf("\n\nDo you want to replace "BOLD_GREEN"%s"UNDO,Armor-> Helmet);
  choice = 'h';
}
else if(strcmp(Type, " ChestPlate") == 0 ){
  printf("\n\nDo you want to replace "BOLD_GREEN"%s"UNDO,Armor-> ChestPlatep);
  choice = 'c';
}
else if(strcmp(Type, " Leggings") == 0 ){
  printf("\n\nDo you want to replace "BOLD_GREEN"%s"UNDO,Armor-> Leggings);
  choice = 'l';
}
else if(strcmp(Type, " Boots") == 0 ){
  printf("\n\nDo you want to replace "BOLD_GREEN"%s"UNDO,Armor-> Boots);
  choice = 'b';
}
else if(strcmp(TheType, " Magick Stick") == 0 || strcmp(TheType, " Bow") == 0 || strcmp(TheType, " Sword") == 0){
  printf("\n\nDo you want to replace "BOLD_GREEN"%s"UNDO,Armor-> Weapon);
  choice = 'w';
}

// OPTION OF YES OR NO(User Input):                 -------
printf("\nWith: "BOLD_GREEN"%s%s?"UNDO,Value,TheType);
printf("\n\n\n‣ See The Stats ["BOLD_YELLOW"s"UNDO"]");
printf("\n\nYes ["GREEN"y"UNDO"]\nNo  ["RED"n"UNDO"]");
printf("\n> ");
scanf("\n%c",&Option);

if(Option == 89 || Option == 78 || Option == 83){
  Option+=32;
}
while(Option != 'y' && Option!='n' && Option != 's'){
  scanf("\n%c",&Option);
}
//-------------------------------------------------------//

//--------------  Option of Change or No:  ---------------//
char output[100];
strcpy(output,Value);   
strcat(output,TheType);

// IF YES: //
if(Option == 'y' ){  
  if(choice == 'h'){
  //Removing the previous stats: //
    *Health -=(Armor->stats.HelmetHealth);
    *Mana -=(Armor->stats.HelmetMana);
    *Armorr -=(Armor->stats.HelmetArmor);
  //----------------------------//  
    strcpy(Armor->Helmet,output);
    if(strcmp(Value,BOLD_CYAN"Silver"UNDO)==0){
      Armor->stats.HelmetHealth = v->SilverHealth;
      Armor->stats.HelmetMana = v->SilverMana;
      Armor->stats.HelmetArmor = v->SilverArmor;
    }
    else if(strcmp(Value,BOLD_YELLOW"Gold")==0){
      Armor->stats.HelmetHealth = v->GoldenHealth;
      Armor->stats.HelmetMana = v->GoldenMana;
      Armor->stats.HelmetArmor = v->GoldenArmor; 
    }
    else if(strcmp(Value,BOLD_MAGENTA"Legendary"UNDO)==0){
      Armor->stats.HelmetHealth = v->LegendaryHealth;
      Armor->stats.HelmetMana = v->LegendaryMana;
      Armor->stats.HelmetArmor = v->LegendaryArmor; 
    }
  //Adding the New Stats: //
    *Health +=(Armor->stats.HelmetHealth);
    *Mana +=(Armor->stats.HelmetMana);
    *Armorr +=(Armor->stats.HelmetArmor);
  //----------------------//    
  }
  else if(choice == 'c'){
  //Removing the previous stats: //
    *Health -=(Armor->stats.ChestHealth);
    *Mana -=(Armor->stats.ChestMana);
    *Armorr -=(Armor->stats.ChestArmor);
  //----------------------------//  
    strcpy(Armor->ChestPlatep,output);
    if(strcmp(Value,BOLD_CYAN"Silver"UNDO) == 0){
      Armor->stats.ChestHealth = v->SilverHealth;
      Armor->stats.ChestMana = v->SilverMana;
      Armor->stats.ChestArmor = v->SilverArmor;
    }
    else if(strcmp(Value,BOLD_YELLOW"Gold"UNDO) == 0){
      Armor->stats.ChestHealth = v->GoldenHealth;
      Armor->stats.ChestMana = v->GoldenMana;
      Armor->stats.ChestArmor = v->GoldenArmor; 
    }
    else if(strcmp(Value,BOLD_MAGENTA"Legendary"UNDO)==0){
      Armor->stats.ChestHealth = v->LegendaryHealth;
      Armor->stats.ChestMana = v->LegendaryMana;
      Armor->stats.ChestArmor = v->LegendaryArmor; 
    }
  //Adding the New Stats: //
    *Health +=(Armor->stats.ChestHealth);
    *Mana +=(Armor->stats.ChestMana);
    *Armorr +=(Armor->stats.ChestArmor);
  //----------------------//     
  }
  else if(choice == 'l'){
  //Removing the previous stats: //
    *Health -=(Armor->stats.LeggingsHealth);
    *Mana -=(Armor->stats.LeggingsMana);
    *Armorr -=(Armor->stats.LeggingsArmor);
  //----------------------------//      
    strcpy(Armor->Leggings,output);
    if(strcmp(Value,BOLD_CYAN"Silver"UNDO)==0){
      Armor->stats.LeggingsHealth = v->SilverHealth;
      Armor->stats.LeggingsMana = v->SilverMana;
      Armor->stats.LeggingsArmor = v->SilverArmor;
    }
    else if(strcmp(Value,BOLD_YELLOW"Gold"UNDO)==0){
      Armor->stats.LeggingsHealth = v->GoldenHealth;
      Armor->stats.LeggingsMana = v->GoldenMana;
      Armor->stats.LeggingsArmor = v->GoldenArmor; 
    }
    else if(strcmp(Value,BOLD_MAGENTA"Legendary"UNDO)==0){
      Armor->stats.LeggingsHealth = v->LegendaryHealth;
      Armor->stats.LeggingsMana = v->LegendaryMana;
      Armor->stats.LeggingsArmor = v->LegendaryArmor; 
    }
  //Adding the New Stats: //
    *Health +=(Armor->stats.LeggingsHealth);
    *Mana +=(Armor->stats.LeggingsMana);
    *Armorr +=(Armor->stats.LeggingsArmor);
  //----------------------//      
  }
  else if(choice == 'b'){
  //Removing the previous stats: //
    *Health -=(Armor->stats.BootsHealth);
    *Mana -=(Armor->stats.BootsMana);
    *Armorr -=(Armor->stats.BootsArmor);
  //----------------------------//      
    strcpy(Armor->Boots,output);
    if(strcmp(Value,BOLD_CYAN"Silver"UNDO)==0){
      Armor->stats.BootsHealth =  v->SilverHealth;
      Armor->stats.BootsMana = v->SilverMana;
      Armor->stats.BootsArmor = v->SilverArmor;
    }
    else if(strcmp(Value,BOLD_YELLOW"Gold"UNDO)==0){
      Armor->stats.BootsHealth = v->GoldenHealth;
      Armor->stats.BootsMana = v->GoldenMana;
      Armor->stats.BootsArmor = v->GoldenArmor; 
    }
    else if(strcmp(Value,BOLD_MAGENTA"Legendary"UNDO)==0){
      Armor->stats.BootsHealth = v->LegendaryHealth;
      Armor->stats.BootsMana = v->LegendaryMana;
      Armor->stats.BootsArmor = v->LegendaryArmor; 
    }
  //Adding the New Stats: //
    *Health +=(Armor->stats.BootsHealth);
    *Mana +=(Armor->stats.BootsMana);
    *Armorr +=(Armor->stats.BootsArmor);
  //----------------------//   
  }
  else if(choice == 'w'){
  //Removing the previous stats: //
    *Damage -=(Armor->stats.WeaponDamage);
    *Mana -=(Armor->stats.WeaponMana);
  //----------------------------//      
      if(strcmp(Value,BOLD_CYAN"Silver"UNDO) == 0 ){
        Armor->stats.WeaponDamage = v->LeatherDamage;
        Armor->stats.WeaponMana = v->LeatherMana;
      }
      else if(strcmp(Value,BOLD_YELLOW"Gold"UNDO) == 0 ){
        Armor->stats.WeaponDamage = v->GoldenDamage;
        Armor->stats.WeaponMana = v->GoldenMana;
      }
      else if(strcmp(Value,BOLD_MAGENTA"Legendary"UNDO) == 0 ){
        Armor->stats.WeaponDamage = v->LegendaryDamage;
        Armor->stats.WeaponMana = v->LegendaryMana;
      }
    strcpy(Armor->Weapon,output);
  //Adding the New Stats: //
    *Damage +=(Armor->stats.WeaponDamage);
    *Mana +=(Armor->stats.WeaponMana);
  //----------------------//  
  }

    printf("Items have now "MAGENTA"changed"UNDO". \n\nCheck your "BOLD_MAGENTA"Inventory"UNDO".");  


//if yes end.    
}
else if(Option == 'n'){
  printf("Okey. you kept your Items as they are.");
}
else if(Option == 's'){
OpenToSeeTheStats(Armor, v, TheType, Value);
goto Again;
}
TypeAnything();
//------------------------------------------END//
}



void OpenToSeeTheStats(struct ArmorPerson *pe,struct Values *v,char Type[],char Value[]){
int pickerHealth,pickerArmor,pickerMana,pickerDamage;

char color[15];
system("clear");

PrintfGraphics("BackPack.txt",15);
printf("\n          -------------------------------------------------\n\n");
//---------------------------------------New Item Found:  ---
if(strcmp(Value,BOLD_RED"Leather"UNDO) == 0 ){
  printf("\n↠ "BOLD_RED"%s"UNDO"%s "BOLD_GREEN"[New Item]"UNDO":",Value,Type);
  pickerHealth = v->LeatherHealth;
  pickerArmor = v->LeatherArmor;
  pickerMana = v->LeatherMana;
  pickerDamage = v->LeatherDamage; 
}
else if(strcmp(Value,BOLD_CYAN"Silver"UNDO) == 0 ){
  printf("\n↠ "BOLD_CYAN"%s"UNDO"%s "BOLD_GREEN"[New Item]"UNDO":",Value,Type);
  pickerHealth = v->SilverHealth;
  pickerArmor = v->SilverArmor;
  pickerMana = v->SilverMana; 
  pickerDamage = v->SilverDamage;
}
else if(strcmp(Value,BOLD_YELLOW"Gold"UNDO) == 0 ){
  printf("\nStatics - "BOLD_YELLOW"%s"UNDO"%s "BOLD_GREEN"[New Item]"UNDO":",Value,Type);
  pickerHealth = v->GoldenHealth;
  pickerArmor = v->GoldenArmor;
  pickerMana = v->GoldenMana; 
  pickerDamage = v->GoldenDamage;
}
else if(strcmp(Value,BOLD_MAGENTA"Legendary"UNDO) == 0 ){
  printf("\nStatics - "BOLD_MAGENTA"%s"UNDO"%s "BOLD_GREEN"[New Item]"UNDO":",Value,Type);
  pickerHealth = v->LegendaryHealth;
  pickerArmor = v->LegendaryArmor;
  pickerMana = v->LegendaryMana; 
  pickerDamage = v->LegendaryDamage;
}

  if(strcmp(Type, " Magick Stick") == 0 || strcmp(Type," Sword") == 0 || strcmp(Type, " Bow") == 0){
    printf("\n"RED" •Damage"UNDO": %i",pickerDamage);
    printf("\n"BLUE" •Mana"UNDO": %i",pickerMana); 
  }
  else {
    printf("\n"GREEN" •Health"UNDO": %i",pickerHealth);
    printf("\n"BLUE" •Mana"UNDO": %i",pickerMana);
    printf("\n"CYAN" •Armor"UNDO": %i",pickerArmor);  
  }
//--------------------------------Hes Item:   -------------//
if(strcmp(Type, " Helmet") == 0 || strcmp(Type,"Hood")==0){
  printf("\n\n\n↠ %s [Your Item]",pe->Helmet);
  printf("\n"GREEN" •Health"UNDO": %i",pe->stats.HelmetHealth);
  printf("\n"BLUE" •Mana"UNDO": %i",pe->stats.HelmetMana);
  printf("\n"CYAN" •Armor"UNDO": %i",pe->stats.HelmetArmor);  
}
else if(strcmp(Type, " ChestPlate") == 0 ){
  printf("\n\n\n↠ %s [Your Item]",pe->ChestPlatep);
  printf("\n"GREEN" •Health"UNDO": %i",pe->stats.ChestHealth);
  printf("\n"BLUE" •Mana"UNDO": %i",pe->stats.ChestMana);
  printf("\n"CYAN" •Armor"UNDO": %i",pe->stats.ChestArmor); 
}
else if(strcmp(Type, " Leggings") == 0 ){
  printf("\n\n\n↠ %s [Your Item]",pe->Leggings);
  printf("\n"GREEN" •Health"UNDO": %i",pe->stats.LeggingsHealth);
  printf("\n"BLUE" •Mana"UNDO": %i",pe->stats.LeggingsMana);
  printf("\n"CYAN" •Armor"UNDO": %i",pe->stats.LeggingsArmor); 
}
else if(strcmp(Type, " Boots") == 0 ){
  printf("\n\n\n↠ %s [Your Item]",pe->Boots);
  printf("\n"GREEN" •Health"UNDO": %i",pe->stats.BootsHealth);
  printf("\n"BLUE" •Mana"UNDO": %i",pe->stats.BootsMana);
  printf("\n"CYAN" •Armor"UNDO": %i",pe->stats.BootsArmor); 
}
else if(strcmp(Type, " Magick Stick") == 0 || strcmp(Type," Sword") == 0 || strcmp(Type, " Bow") == 0){
  printf("\n\n\n↠ %s [Your Item]",pe->Weapon);
  printf("\n"RED" •Damage"UNDO": %i",pe->stats.WeaponDamage);
  printf("\n"BLUE" •Mana"UNDO": %i",pe->stats.WeaponMana); 
}

printf("\n\n\n");    
TypeAnything();


}


void TypeAnything(){
char enter[1];
  printf("\n\n> Type [Anything] to Continue: ");
  scanf("\n%c", &enter[0]);  
  enter[0] = 'a';
  while ((getchar()) != '\n' && getchar() != EOF);  /* Cleaning the input */ 

  if(enter[0] == 'a'){
  
    system("clear");  /* clears the console screen */
  
  }

}

void CleanNewLine(char Lines[]){
 int clean1;
  for(clean1 = 0; clean1 < strlen(Lines); clean1++)
{
    if(Lines[clean1] == '\n' || Lines[clean1] == '\r')
    {
        Lines[clean1] = '\0';
        break;
    }
}
}

void ValuesOfItems(struct Values *v){
  
v->LeatherArmor = rand()%6+8;
v->LeatherHealth = rand()%10+25;
v->LeatherMana = rand()%6+10;
v->LeatherDamage = rand()%4+3;

v->SilverArmor = rand()%9+15;
v->SilverHealth = rand()%26+55;
v->SilverMana = rand()%11+20;
v->SilverDamage = rand()%11+15;

v->GoldenArmor = rand()%16+20;
v->GoldenHealth = rand()%31+40;
v->GoldenMana = rand()%26+75;
v->GoldenDamage = rand()%16+55;

v->LegendaryArmor = rand()%21+45;
v->LegendaryHealth = rand()%306+255;
v->LegendaryMana = rand()%36+135;
v->LegendaryDamage = rand()%11+100;

}

void StartingItems(struct ArmorPerson *p,struct Values *v, char Tribe[],int *Damage, int *Mana, int *Health, int *Armor){

//---------------------Setting up the names of items: 
strcpy(p->Helmet,BOLD_RED"Leather"UNDO" Helmet");
strcpy(p->ChestPlatep,BOLD_RED"Leather"UNDO" ChestPlate");
strcpy(p->Leggings,BOLD_RED"Leather"UNDO" Leggings");
strcpy(p->Boots,BOLD_RED"Leather"UNDO" Boots");

if(strcmp(Tribe,"WhiteWizard") == 0 ||strcmp(Tribe,"BlackWizard") == 0||strcmp(Tribe,"GreyWizard") == 0){
  
  strcpy(p->Weapon,BOLD_RED"Leather"UNDO" Magick Stick");

}
else if(strcmp(Tribe,"DefenderNative") == 0 ||strcmp(Tribe,"OcculistNative") == 0||strcmp(Tribe,"RangerNative")==0){

  strcpy(p->Weapon,BOLD_RED"Leather"UNDO"  Bow");

}
else if(strcmp(Tribe,"WaterWarrior") == 0 ||strcmp(Tribe,"FireWarrior") == 0||strcmp(Tribe,"EarthWarrior")==0){

  strcpy(p->Weapon,BOLD_RED"Leather"UNDO"  Sword");

}

//------------------Putting in the stats-Values of items:
p->stats.HelmetHealth = v->LeatherHealth;
p->stats.HelmetArmor= v->LeatherArmor;
p->stats.HelmetMana = v->LeatherMana;

ValuesOfItems(v);

p->stats.ChestHealth = v->LeatherHealth;
p->stats.ChestArmor= v->LeatherArmor;
p->stats.ChestMana = v->LeatherMana;

ValuesOfItems(v);

p->stats.LeggingsHealth = v->LeatherHealth;
p->stats.LeggingsArmor= v->LeatherArmor;
p->stats.LeggingsMana = v->LeatherMana;

ValuesOfItems(v);

p->stats.BootsHealth = v->LeatherHealth;
p->stats.BootsArmor = v->LeatherArmor;
p->stats.BootsMana = v->LeatherMana;

ValuesOfItems(v);

p->stats.WeaponDamage = v->LeatherDamage;
p->stats.WeaponMana = v->LeatherMana;

// Giving Stats(Damage,Mana,Health,Armor) //
*Damage += p->stats.WeaponDamage;

*Mana += (p->stats.HelmetMana + p->stats.ChestMana + p->stats.LeggingsMana + p->stats.BootsMana);

*Health += (p->stats.HelmetHealth + p->stats.ChestHealth + p->stats.LeggingsHealth + p->stats.BootsHealth);

*Armor += (p->stats.HelmetArmor + p->stats.ChestArmor+ p->stats.LeggingsArmor + p->stats.BootsArmor);

}

void MapChoice(int SplitChoice,char Name[15],int Mana,int Health, int Stamina, int Armor, int Damage,int Result, int Mana_Potion, int Health_Potion, int Large_Mana_Potion, int Large_Health_Potion,int Gold, char Tribe[],int VarityOfItems, int LeveLNow, int Split, int Experiences,int GoBackBattle, int DONE,char Statics[]){

GoSouth(Split,Name,Mana,Health,Stamina,Armor,Damage,Result,&Mana_Potion,&Health_Potion,&Large_Mana_Potion,&Large_Health_Potion,&Gold,Tribe,VarityOfItems,LeveLNow,Split,&Experiences, GoBackBattle,&DONE,"Statics.txt");
}

int GoSouth(int SplitChoice,char Name[15],int *Mana,int *Health, int Stamina, int *Armor, int *Damage,int *Result, int *Mana_Potion, int *Health_Potion, int *Large_Mana_Potion, int *Large_Health_Potion,int *Gold, char Tribe[],int VarityOfItems, int LeveLNow, int Split, int *Experiences,int GoBackBattle, int *DONE,char Statics[],struct ArmorPerson *p,struct Values *v){

Again:
system("clear");
int PotionPass = 0;
int NumberOfDirection;
char option;
int Loot1Pass = 0;
char option2;
char option3;
char BossOption;
char InsideBoss;

PrintfGraphics("Shouth1.txt", 11);
printf("\n             -------------------------------------------\n\n");
printf("[%s]: I am desperate to finding my wife..",Name);
sleep(2);
printf("\n[%s]: All we wanted was to get away from all people",Name);
sleep(3);
printf("\n[%s]: And live in that nice island. Zero people",Name);
sleep(3);
printf("\n[%s]: Now im here fighting Monsters",Name);
sleep(3);
printf("\n[%s]: The Tomorrow , is really, unknown..",Name);
sleep(3);
printf("\n[%s]: Last thing i want is to get spooked again.",Name);
sleep(3);
printf("\n\n");
sleep((float)2.8);
LeveLNow = 2;
Battles(*(Mana),*(Health),Stamina,*(Armor),*(Damage),"Monster 3.txt",14,"Skills.txt",4,Result,Mana_Potion,Health_Potion,Large_Mana_Potion,Large_Health_Potion,"Skeleton",350,101,100,LeveLNow,0);

if(*(Result) == 0){
  goto Again;
}

system("clear");
PrintfGraphics("Shouth1.txt", 11);
printf("\n             -------------------------------------------\n\n");
printf("\n[%s]: Its like am in a Game...",Name);
sleep(3);
printf("\n[%s]: And the Developer is trolling me.",Name);
sleep(3);
printf("\n[%s]: Whatever..i shouldnt have played so many games in my early age..",Name);
sleep(3);
printf("\n[%s]: i'mma try to find a place and hide.",Name);
sleep(3);
printf("\n\n");
sleep(3);
system("clear");
PrintfGraphics("FootPrints.txt", 11);
printf("\n        -------------------------------------------\n\n");
printf("        ["BOLD_RED"Loading"UNDO"]");
printf("\n\n");
sleep(3);
again:
system("clear");
PrintfGraphics("LightHouse.txt", 16);
printf("\n        ----------------------------------------------------------\n\n");
printf("\n[%s]: Thats a good spot to spent the night.",Name);
sleep(1);
printf("\n["BOLD_RED"1"UNDO"] Go inside");
printf("\n["BOLD_RED"2"UNDO"] Search for Loot");

printf("\n> ");
scanf("\n%c",&option);
while(option != '1' && option != '2'){
  printf("\n> ");
  scanf("\n%c",&option);  
}
if(option == '2'){
  SearchForLoot(Mana_Potion,  Health_Potion, Large_Mana_Potion,  Large_Health_Potion,Loot1Pass);
  Loot1Pass +=1;
  goto again;
}
else if(option == '1'){
  printf("\n["BOLD_RED"1"UNDO"] Front Door");
  printf("\n["BOLD_RED"2"UNDO"] Back Door");
  printf("\n> ");
  scanf("\n%c",&option2);
  while(option2 != '1' && option2 != '2'){  
    printf("\n> ");
    scanf("\n%c",&option2);
}


 if(option2 == '1'){   
Safe:
  system("clear");
  PrintfGraphics("LightHouse.txt", 16);
  printf("\n        ---------------------------------------------------\n\n");
   printf("\n[%s]: Ok its safe.",Name);
   sleep(3);
   printf("\n\n");
   sleep(3);
   printf("\n[%s]: I'mma go and take a quick nap.",Name);
   printf("\n\n");
   sleep(3);
   system("clear");
   PrintfGraphics("Night-Night.txt", 8);
   printf("\n        ----------------------------------------------------------------------------\n\n");
   printf("        ["BOLD_RED"Loading"UNDO"]");
   printf("\n");
   sleep(5);
   system("clear");

 }else if(option2 == '2'){
   printf("*You bumped into a creature!");
   printf("\n");
   sleep(3);
   system("clear");
Start:   
   BeforeMonster("Evil Monster.txt", Name, "The Devil",17,LeveLNow,0);

  do{
   
    printf("\n>");
    scanf("\n%c",&option3);   
 }while(option3 != '1' && option3 != '2' && option3 != '3');

  if(option3 == '1'){
    Battles(*(Mana), *(Health),Stamina,*(Armor),*(Damage),"Evil Monster.txt",17,"Skills.txt",4,Result,Mana_Potion,Health_Potion, Large_Mana_Potion, Large_Health_Potion, "The Devil",650,201,95,LeveLNow,0);

    if(*(Result) == 0){
      goto Again;
    }
    else if(*(Result) == 1){
      AfterBattle(*(Result), Experiences, Gold, 12 , 900 , p, Large_Health_Potion, Large_Mana_Potion, v, Tribe, Damage, Health,Armor, Mana, LeveLNow);
      sleep(3); 
    }
  }
  else if(option3 == '2'){
   PlayerInGeneral(Tribe, Name,"Statics.txt", VarityOfItems,  LeveLNow, Split,  *(Mana),  *(Health),  Stamina,  *(Armor), *(Damage), Result,  Mana_Potion, Health_Potion, Large_Mana_Potion, Large_Health_Potion, Gold, Experiences,GoBackBattle,4,p);

   system("clear");
   goto Start;
  
}
else if(option3 == '3'){
  LeveLShow(&LeveLNow,LeveLNow,*Experiences);
  system("clear");
  goto Start;
}
sleep(2);
 goto Safe;

  }//You bumped into a creature END. //
  system("clear");
  PrintfGraphics("LightHouse.txt", 16);
  printf("\n        ------------------------------------------------------\n\n");
  printf("[%s]: Im surprised i havent been attacked during the night.",Name);
  sleep(1);
  printf("\n\n");
  sleep(3);
  system("clear");
  PrintfGraphics("FootPrints.txt", 11);
  printf("\n        -------------------------------------------\n\n");
  printf("     ["BOLD_RED"Loading"UNDO"]");
  printf("\n\n");
  sleep((float)3.5);
  system("clear");
AgainBossOption:
  PrintfGraphics("Actual LightHouse.txt", 19);

  printf("\n\n           [%s]: That seems to be the end..",Name);
  printf("\n\n           ["BOLD_RED"1"UNDO"] Go Inside");
  printf("\n           ["BOLD_RED"2"UNDO"] Search For Loot");
  


  
  do{
    printf("\n> ");
    scanf("\n%c",&BossOption);
  }while(BossOption != '1' && BossOption != '2');
  
  if(BossOption == '1'){
    system("clear");
    PrintfGraphics("Actual LightHouse.txt", 19);
    printf("\n        -------------------------------------------\n\n");
    printf("          [Garm]: You're not invited.");
    sleep((float)1.5);
    printf("\n\n          [Garm]: These are your last breathes. ");
    sleep(3);
    printf("\n\n");
    sleep((float)3.5);
AgainBoss: 
    system("clear");
    BeforeMonster("South Boss.txt", Name, "Garm",23 ,LeveLNow,1);
    

    do{
      printf("\n>");
      scanf("\n%c",&InsideBoss);
    }while(InsideBoss != '1' && InsideBoss != '2' && InsideBoss != '3');
  
    if(InsideBoss == '1'){
       Battles(*(Mana), *(Health),Stamina,*(Armor),*(Damage),"South Boss.txt",23,"Skills.txt",4,Result,Mana_Potion,Health_Potion, Large_Mana_Potion, Large_Health_Potion, "South Boss",650,256,95,LeveLNow,1);
       if(*(Result) == 0){
        goto Again;
      }
      else if(*(Result) == 1){
        GoingBackFromBosses(Experiences,Damage,Armor,Mana,Health,Large_Health_Potion,1450,1650,Gold,25);
      }
    }
    else if(InsideBoss == '2'){
      PlayerInGeneral(Tribe, Name,"Statics.txt", VarityOfItems,  LeveLNow, Split,  *(Mana),  *(Health),  Stamina,  *(Armor), *(Damage), Result,  Mana_Potion, Health_Potion, Large_Mana_Potion, Large_Health_Potion, Gold, Experiences,GoBackBattle,3,p);
      system("clear");
      goto AgainBoss;
    }
    else if(InsideBoss == '3'){
      LeveLShow(&LeveLNow,LeveLNow,*Experiences);
      system("clear");
      goto AgainBoss; 
    }
 
  
  
  
  }else if(BossOption == '2'){
    SearchForLoot(Mana_Potion, Health_Potion, Large_Mana_Potion, Large_Health_Potion, PotionPass);
    PotionPass+=1;
    system("clear");
    goto AgainBossOption;
  }

}
*DONE += 1; 

return *DONE;
} 

void Print_Clash(char Filename[],char number[]){
  char c; 
   
  FILE * fClash = fopen(Filename,"r");
  
  for(int j = 0; j < 350; j++){
    c = fgetc(fClash);
    if(c == number[0]){
      c = fgetc(fClash);
      assert(c == '#');      
      c = fgetc(fClash);
      printf("\n"); 
      while(c != '#'){
        system("setterm -bold on");  
        printf("%c",c);
        c = fgetc(fClash); 
      }
    
    }
  
  }  
  
  fclose(fClash);

}

void flushInput(){
  while ((getchar()) != '\n' && (getchar()) != EOF); 

}