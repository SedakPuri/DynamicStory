//  Sedak Puri
//  main.cpp
//  Compiler: XCode
//  Created by Sedak Puri on 7/4/18.
//  Copyright © 2018 Sedak Puri. All rights reserved.

#include <iostream>
#include <string>
using namespace std;
const int STORYLENGTH = 8;  //17 Story Elements Total!

int main() {
    //Setup/Initialization of Variables!
    unsigned int response = 0; //Responce for each question (either a 1 or 2)
    string initial = "Once upon a time, three little pigs existed in a far away land. They lived with their mother and loved her dearly, but one day, she told them that it was their time to go out in the real world and make a name for themselves. \nShould you...\n(1)Agree with her and go up to pack your things\n(2)Complain";       //I made an initial string to prevent offset of parallel path arrays
    string path1[STORYLENGTH] = {"You go up to pack your things and throw all your belongings into a suitcase. As you are moving out tomorrow, you decide to hit the hay and get some rest. The next morning, you get up, have breakfast with momma piggie and your siblings, and depart home to make a life for yourself. \nShould you....\n(1)Depart towards the mountains\n(2)Depart towards the flatlands","You are now departing towards the mountains. As you cross the rugged landscape, you see a wolf in the distance. \nShould you...\n(1)Approach the wolf\n(2)Avoid the wolf and continue with an altered course and try to build shelter", "As you approach the figure--a wolf--he seems rather friendly. He offers to help find food and help build shelter. \nShould you...\n(1)Accept his help\n(2)Decline his help and walk away", "The wolf helps you gather supplies to build your house... but you cant help notice him staring at you. You begin to get nervous for your safety.... \nShould you... \n(1)Continue to utilize the wolf for his strength and expidite the shelter building process...\n(2)Escape the wolf whilst hes not looking", "As the wolf helps construct the finishing touches on your brick house, you notice your siblings in the distance building flimsy houses of straw. You think to yourself,\"The structural integrity of their houses are concerningly compromisable\"\nShould you...\n(1)Approach your small siblings and offer advise\n(2)Leave them be and reassure yourself of the idea of the survival of the fittest","Your siblings are almost done constructing their small flimsy straw houses. You try to explain that even a gust of wind will knock them down but they are overconfident and assure that no such thing will happen to their beautiful straw houses. You also alert them as to the possible danger of a nearbye wolf and stay with them for a couple hours to ensure the wolf has left the vicinity of your brick house...\nShould you...\n(1)Leave them be now and run back to your house to spend the night\n(2)Stay with your siblings in the straw house for that night to comfort them", "You arrive at your newly constructed brick house and marvel at its architectural superiority. Wow. You have really outdone yourself this time lad. As you prepare for bed, you cant help but notice some strange sounds comming from outside. Around 2AM, you hear squealing in the distance. \nShould you...\n(1)Go to bed and investigate in the morning\n(2)Book it out of bed and see if the sound could have been your siblings!", "You sleep in your own bed for the rest of the night like a baby. Honestly, its the best sleep you have ever had in your life. In the morning you return to your brothers\' straw houses and fild just a pile of straw. Overwhelmed by enourmous guilt and agony, you begin to cry. Just as the tears start flowing down, you remember that you never liked them anyways and you are a loner. You return to your brick house and continue on your day. Days pass, weeks pass, and before you know it you have your own family of piggies and live hapily ever after in your little brick house."};
    string path2[STORYLENGTH] = {"Momma piggie gets mad! She tells you to pack your things and get over yourself. She tells you that you are departing to the flatlands tomorrow with your siblings. As furious as you are, you obey her and pack your things. The anger swells as you lie in bed. \nShould you...\n(1)Run away that night\n(2)Wait until morning and leave with your siblings", "You are now crossing the flatlands. There is little to see so you make great time. However, it suddenly begins to get dark! A dark figure crosses in the distance...\nShould you...\n(1)Move towards the shadow\n(2)Move away from the figure towards a pile of straw", "You move away from the figure and find a perfect spot to settle down and build a house. Your two siblings decide to use straw to build their house, but you being the wiser piggie, decide to build a house of brick. As you assemble the house, a wolf appears and offers assistance.\nShould you...\n(1)Accept his help\n(2)Decline his help and call him a freak", "The wolf acknowleges your second thoughts and suddenly changes attitude and begins to creepily circle you...\nShould you...\n(1)Talk yourself out of the situtaion and explain to the wolf that you absolutely need him (and practically beg for your life)\n(2)Throw a nearbye stone at the wolf and try to dash away to ensure self-preservation", "As you dash away from the wolf and your newly constructed house, you don't look back, though you know he is watching. Wounded. Planning. Was this a bad choice? Probabily.\nShould you...\n(1)Run towards your siblings and help them with their construction\n(2)Run towards a river and get water and gater food", "You approach a river and find fresh water. Using a canteen you packed from home, you fill it with water and collect some berries you find. It is seriously getting dark now and you also are concerned for the welfare of your siblings...What's next?\nShould you...\n(1)Head back to your own house for the night and catch up with your siblings in the morning\n(2)Check on your siblings progress and make sure they are safe", "You end up chilling with your siblings and staying the night there. You enjoy supper and good talk and share childhood stories of momma piggie and bond over how much you miss home. Suddenly you hear the wolf outside the house yelling, \"Little piggies, let me come in or I'll huff, and I'll puff, and I'll blow your house in.\". You are paralyzed in fear but your siblings, in unison, respond with an affirmative \"Not by the hair on my chinnie chin chin!\".\nShould you...\n(1)Embrace your flight response and run out the backdoor, leaving your siblings to fend for themselves\n(2)Stay with your siblings and fulfill your duty as the eldest of the group", "This was a dumb decision. The wolf ruthlessly huffed and puffed and eventually blew the house down--just he promised. What a rigid lad. Completely exposed, you and your siblings becaming nothing more than a snack!"};
    
    //Game Loop
    unsigned int iteration = 0;     //Iteration is the variable to indicate the step of the story
    while(true){
        if(response == 0){          //Initial Iteration (First question)
            cout<<"Welcome to the non-linear story game user! This is an adaptation of the common story Three Little Pigs where you are one of the piggies!\n\n"<<initial<<endl;
            cin>>response;
            cout<<endl<<endl;
        } else if (response == 1){                                  //Path 1
            cout<<path1[iteration]<<endl;
            iteration++;
            if(iteration==STORYLENGTH){                             //You've reached the final index of the array and the end of the game
                cout<<"\nCongratulations! Game Over! :)\n";
               break;                                               //Gameover Case(Won)
            }
            cin>>response;
            cout<<endl<<endl;
        } else if (response == 2){                                  //Path 2
            cout<<path2[iteration]<<endl;
            iteration++;
            if(iteration==STORYLENGTH){                             //You've reached the final index of the array and the end of the game
                cout<<"\nSorry, you lost! Game Over! :(\n";
                break;                                              //Gameover Case(Lost)
            }
            cin>>response;
            cout<<endl<<endl;
        } else {
            cout<<"Invalid input! Please enter either a 1 or 2! Enter a new response!\n";
            cin>>response;
        }
    }
    return 0;
}
