# Fixture Creator
 The program to create fixture and leaderboard.

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376449-49337c50-5b38-43c0-b33d-68cd9b217913.png" alt="takım listesi"/>
</p>

# Guide

### What is this program for?

We can create teams as we like. After we create the teams, program creates players for each team. Each team play one match with each other. After all the matches are done, the leaderboard is created.

### Team List

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376451-28d3b3a6-a1e0-4a61-92d5-a1af2d66cec5.gif" alt="team list"/>
</p>

With this screen, we can list our teams' information. The user can add or remove any team. When the user creates a team, the program needs a team name, manager name and team line-up. Line-up values are set as “4-4-2” at the start but the user can change it.
Program shows created teams' information on screen. Each column corresponds as below:

*	Team No
*	Team’s Short Name
*	Team’s Name
*	Team’s Manager’s Name

When the team’s creation is done, the program creates all the players with the given line-up information. 
Example for “4-4-2” line-up:

*	1 Goalkeeper
*	4 Defender
*	4 Midfielder
*	2 Forward

Each player has a random name, no, age and power.

### Team Information

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376454-89bca882-16aa-40a9-aea2-ed4a3aa0b844.gif" alt="team detail"/>
</p>

In this screen, we can see the details of the selected team, list of players information and all played matches. User can also change the selected player’s power and number.

### Fixture

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376461-e4d0d864-72e7-496e-8a6e-49d591c89e3f.gif" alt="fixture"/>
</p>

With this screen we can list all the matches played with a final score. Every match has a specific match number so the user can search for a match or access each match to see match detail.
In the match detail screen, the user can see both team’s information and player list. The program also calculates the win rate for each team and shows the final score. 

### Leaderboard

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376463-4d475b46-8839-4c19-aaf1-157b3667867d.png" alt="scor board"/>
</p>

*	Team place
*	Team name
*	Played matches
*	Number of games won
*	Number of tied games
*	Number of games lost
*	Number of goals scored
*	Number of goals conceded
*	Average
*	Total score

# Algorithm

## Scheduling algorithm

Let’s say “n” is our number of competitors. With this process, we can calculate how many games require pure round robin tournament.

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376465-8a0b7854-e117-4e67-96e5-f2430ca4b2c6.png" alt="1"/>
</p>

* If “n” is even:

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376473-ed19f7f1-0576-4437-8448-3cfa21e21762.png" alt="2"/>
</p>

* If “n” is odd:

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376476-a45b5e5f-c93d-48cf-9e4a-a2d5af2d20db.png" alt="3"/>
</p>

## Circle method

The circle method is the standard algorithm to create a schedule for a round-robin tournament. All competitors are assigned to numbers, and then paired in the first round:

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376481-49403780-ff53-41bb-93b2-2f47b5a0bd9d.png" alt="4"/>
</p>

Next, one of the competitors in the first or last column of the table is fixed (number one in this example) and the others rotated clockwise one position.

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376488-d529ee20-3440-44ff-9eeb-16098495a7bf.png" alt="5"/>
</p>

This is repeated until you end up almost back at the initial position:

<p align="center">
  <img src="https://user-images.githubusercontent.com/74189776/147376491-ad624850-7307-4285-866b-90ed073c0013.png" alt="6"/>
</p>

## Creating players

### Name

There are two text files in our program. First one has 500 random different names and other one has 500 different random surnames. When the program creates the name, it picks one random name and one random surname from each file and puts them together. After that, we check if there is any same name that we have created before. If there is not, we set our players’ name.

### Player Number

Numbers can be between 1 and 99. It is randomly generated but, in each generation, the program checks if there is a same number created before.

### Age

Age can be between 18 and 36. But average age of the team cannot be less than 25 and more than 32. So, the program creates 11 random ages between 18 and 36. Calculates average of all the ages. If the average is more than 32 or less than 25, it creates random new numbers until the average is achieved.

### Power

We use the same process here as the age. But the power values cannot be less than 30 and more than 100. And average power of the team cannot be less than 60. So, we do the same loop here until the average is achieved.

### Placement

When the user creates a team, we get a line-up information. For example, “4-4-2”. After we create all player’s information. We put all the information together and distribute placements desired for each player. 

## Match Final Score

Let’s explain this in an example. There is two team called “A” and “B”. We want to calculate the result of the match between the two teams.

First, we need some info:
*	Average power of the defense players: DPO
*	Average power of the midfielders: OSPO
*	Average power of the forward players: FPO
*	Average power of the team: TOP

Now we need the score values of each team:
*	A team score: A.Goal
*	B team score: B.Goal


At the start, we give these teams a random score between 0 and 6. For example let’s say it is 3-1.  In this situation:
*	A.Goal = 3
*	B.Goal = 1

Let’s start to calculate the result of the match. (Don’t forget the goal value cannot be less than 0)

* If (A.FPO > B.FPO) A.Goal++ (A.Goal = 4 , B.Goal = 1)
* If (B.FPO > A.FPO) B. Goal ++ (A.Goal = 3 , B. Goal = 2)
* If (A.DPO > B.DPO) B. Goal -- (A.Goal = 3 , B. Goal = 0)
* If (B.DPO > A.DPO) A.Goal -- (A.Goal = 2 , B. Goal = 1)
* If (A.OSPO > B.OSPO) A.Goal ++ and B. Goal -- (A.Goal = 4 , B. Goal = 0)
* If (B.OSPO > A.OSPO) B. Goal ++ and A. Goal -- (A.Goal = 2 , B. Goal = 2)

* If (A.TOP > B.TOP) A. Goal ++ or B. Goal -- (One of the relevant conditions will be chosen randomly)
* If (B.TOP > A.TOP) B. Goal ++ or A. Goal -- (One of the relevant conditions will be chosen randomly)

At the end we have one score value for each team. If any one of them is less than 0, we equal that score to 0.

# References

https://en.wikipedia.org/wiki/Round-robin_tournament
