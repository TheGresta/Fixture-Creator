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

## Algorithm

### Scheduling algorithm



