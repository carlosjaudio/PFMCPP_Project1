#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: amplifier
//  action 1: amplifier's tubes get ready
amplifier.tubesReady();
//  action 2: amplifier turns on overdrive
amplifier.turnOnOverdrive();
//  action 3: amplifier turns on delay effect
amplifier.turnOnDelay();
//  2)
//  Noun: cat
//  action 1: the cat is born
cat.born();
//  action 2: cat eats some food
cat.eatFood();
//  action 3: cat is plays with the ball
cat.playWithBall();
//  3)
//  Noun: mobilePhone
//  action 1: mobile phone vibrates
mobilePhone.vibrates();
//  action 2: mobile phone searches for a WiFi connection
mobilePhone.searchWifi();
//  action 3: mobile phone charges
mobilePhone.charge();
//  4)
//  Noun: orc
//  action 1: orc sleeps 
orc.sleep();
//  action 2: orc attacks human
orc.attack();
//  action 3: orc run from battle
orc.run();
//  5)
//  Noun: pianist
//  action 1: pianist plays major scale
pianist.playMajorScale();
//  action 2: pianist plays jazz
pianist.playJazz();
//  action 3: pianista plays solo
pianist.playSolo();
//  6)
//  Noun: soldier
//  action 1: solider trains
soldier.train();
//  action 2: oldier guards
soldier.guard();
//  action 3: soldier delivers debrief
soldier.debrief();
//  7)
//  Noun: water
//  action 1: water gets colds
water.cold();
//  action 2: water gets hot
water.hot();
//  action 3: water turned into ice
water.turnIce();
//  8)
//  Noun: compiler
//  action 1: compiler builds succesfully
compiler.buildSuccess(),
//  action 2: compiler finds errors
compiler.findsErrors();
//  action 3: compiler fails to work correctly
compiler.fail();
//  9)
//  Noun: drummer
//  action 1: drummer starts recording
drummer.recording();
//  action 2: drummer plays fast
drummer.playFast();
//  action 3: drummer stops practice
drummer.stopPractice();
//  10)
//  Noun: windows
//  action 1: windows start
windows.start();
//  action 2: windows have new updates
windows.updatesAvailable();
//  action 3: windows needs to restart
windows.needRestart();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
