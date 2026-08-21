#include <stdio.h>
#include <stdlib.h>//for rand


int main()
{
    // CHARACTER STATS
    int hp[3] = {90, 120, 100};
    int attack[3] = {30, 20, 35};
    int defense[3] = {10, 20, 8};

    char *characterName[3] = {"Viper Nova","Creedy Glush","Master Mora"};

    // ENEMY STATS
    int enemyHP[5] = {60, 80, 110, 150, 250};
    int enemyAttack[5] = {15, 18, 22, 28, 35};
    int enemyDefense[5] = {5, 8, 12, 18, 20};

    char *enemyName[5] = {"Goblin","Skeleton","Orc","Dark Knight","Dragon"};

    // CHARACTER SELECTION
    printf("==============================\n");
    printf("          CLASH ARENA\n");
    printf("==============================\n");
    printf("   WELCOME TO THE WORLD OF\n");
    printf("             SAGA\n\n");

    printf("Choose your character:\n");
    printf("1. Viper Nova\n");
    printf("2. Creedy Glush\n");
    printf("3. Master Mora\n");

    int choice;
    scanf("%d", &choice);

    int playerHP;
    int playerAttackPower;
    int playerDefense;

    switch(choice)
    {
        case 1:
            playerHP = hp[0];
            playerAttackPower = attack[0];
            playerDefense = defense[0];
            break;

        case 2:
            playerHP = hp[1];
            playerAttackPower = attack[1];
            playerDefense = defense[1];
            break;

        case 3:
            playerHP = hp[2];
            playerAttackPower = attack[2];
            playerDefense = defense[2];
            break;

        default:
            printf("INVALID INPUT\n");
            return 0;
    }

    printf("\n%s selected!\n", characterName[choice - 1]);
    printf("HP      : %d\n", playerHP);
    printf("Attack  : %d\n", playerAttackPower);
    printf("Defense : %d\n", playerDefense);

    // BATTLE
    int enemyIndex = 0;

    int currentEnemyHP;
    int currentEnemyAttack;
    int currentEnemyDefense;

    int action;
    int potions = 3;
    int maxPlayerHP = playerHP;
    int defending = 0;
    int escape = 0;


    // OUTER LOOP = MOVE THROUGH THE ENEMIES

    while(enemyIndex < 5 && playerHP > 0 && escape == 0)
    {
        // Get current enemy's stats
        currentEnemyHP = enemyHP[enemyIndex];
        currentEnemyAttack = enemyAttack[enemyIndex];
        currentEnemyDefense = enemyDefense[enemyIndex];

        printf("\n\n================================\n");
        printf("       NEW ENEMY APPROACHES!\n");
        printf("================================\n");

        printf("\nEnemy: %s\n", enemyName[enemyIndex]);
        printf("HP      : %d\n", currentEnemyHP);
        printf("Attack  : %d\n", currentEnemyAttack);
        printf("Defense : %d\n", currentEnemyDefense);

        
        // INNER LOOP = TURNS IN CURRENT BATTLE
        

        while(currentEnemyHP > 0 && playerHP > 0 && escape == 0)
        {
            printf("\n================================\n");
            printf("             BATTLE\n");
            printf("================================\n");

            printf("\nPlayer : %s\n", characterName[choice - 1]);
            printf("HP     : %d/%d\n", playerHP, maxPlayerHP);
            printf("Attack : %d\n", playerAttackPower);
            printf("Defense: %d\n", playerDefense);

            printf("\nEnemy  : %s\n", enemyName[enemyIndex]);
            printf("HP     : %d\n", currentEnemyHP);
            printf("Attack : %d\n", currentEnemyAttack);
            printf("Defense: %d\n", currentEnemyDefense);

            printf("\n1. Attack\n");
            printf("2. Heal\n");
            printf("3. Defend\n");
            printf("4. Run\n");

            printf("\nITS YOUR TURN: ");
            scanf("%d", &action);

            // PLAYER TURN
            switch(action)
            {
                case 1:
                    currentEnemyHP = currentEnemyHP - playerAttackPower;

                    printf("\nGREAT!\n");
                    printf("%s got %d damage!\n",enemyName[enemyIndex],playerAttackPower);

                    if(currentEnemyHP <= 0)
                    {
                        currentEnemyHP = 0;
                        printf("\n%s has been defeated!\n",enemyName[enemyIndex]);
                    }
                    break;

                    case 2:
                    if(potions > 0)
                    {
                        playerHP = playerHP + 20;
                        potions--;

                        if(playerHP > maxPlayerHP)
                        {
                            playerHP = maxPlayerHP;
                        }

                        printf("\nPotion used!\n");
                        printf("Your HP: %d/%d\n",playerHP, maxPlayerHP);
                        printf("Potions left: %d\n", potions);
                    }
                    else
                    {
                        printf("\nYOU DON'T HAVE ANY POTIONS LEFT!\n");
                    }
                    break;

                   case 3:
                    defending = 1;
                    printf("\nYou are defending!\n");
                    break;

                case 4:
                    escape = 1;
                    printf("\nYOU HAVE ESCAPED FROM THE BATTLE!\n");
                    break;

                default:
                    printf("\nINVALID ACTION!\n");
                    break;
            }

            
            // ENEMY ATTACKS
            

            // ENEMY TURN
             if(escape == 0 && currentEnemyHP > 0)
             {
             int damage;
             int enemyChoice;

             switch(enemyIndex)
            {
        
            // 0. GOBLIN

            case 0:
            enemyChoice = rand() % 2;

            if(enemyChoice == 0)
            {
                damage = rand() % 6 + 10;      
                printf("\nGoblin used CLAW!\n");
            }
            else
            {
                damage = rand() % 7 + 12;      
                printf("\nGoblin used BITE!\n");
            }
            break;


        
        // 1. SKELETON
        
            case 1:
            potions++;
            enemyChoice = rand() % 2;

            if(enemyChoice == 0)
            {
                damage = rand() % 7 + 12;     
                printf("\nSkeleton used SLASH!\n");
            }
            else
            {
                damage = rand() % 6 + 15;     
                printf("\nSkeleton used BONE THROW!\n");
            }
            break;


        
            // 2. ORC
        
            case 2:
            enemyChoice = rand() % 2;

            if(enemyChoice == 0)
            {
                damage = rand() % 11 + 15;     
                printf("\nOrc used AXE ATTACK!\n");
            }
            else
            {
                damage = rand() % 11 + 25;   
                printf("\nOrc used HEAVY SMASH!\n");
            }
            break;


        
            // 3. DARK KNIGHT
        
            case 3:
            enemyChoice = rand() % 2;

            if(enemyChoice == 0)
            {
                damage = rand() % 11 + 20;    
                printf("\nDark Knight used SWORD STRIKE!\n");
            }
            else
            {
                damage = rand() % 11 + 15;    
                printf("\nDark Knight used SHIELD BASH!\n");
            }
            break;


        
        // 4. DRAGON
        
            case 4:
            enemyChoice = rand() % 3;

            if(enemyChoice == 0)
            {
                damage = rand() % 11 + 20;     
                printf("\nDragon used CLAW!\n");
            }
            else if(enemyChoice == 1)
            {
                damage = rand() % 11 + 15;     
                printf("\nDragon used TAIL SWIPE!\n");
            }
            else
            {
                damage = rand() % 16 + 30;     
                printf("\nDragon used FIRE BREATH!\n");
            }
            break;
    }


    
    // PLAYER DEFEND
    

    if(defending == 1)
    {
        playerHP = playerHP - (damage / 2);
        printf("You blocked half the damage!\n");
    }
    else
    {
        playerHP = playerHP - damage;
    }

    printf("You received %d damage!\n", damage);

    // Defend rests
    defending = 0;
}

        // CURRENT ENEMY DEFEATED

        if(currentEnemyHP <= 0)
        {
            printf("\n================================\n");
            printf("%s DEFEATED!\n", enemyName[enemyIndex]);
            printf("================================\n");

            enemyIndex++;

            if(enemyIndex < 5)
            {
                printf("\nTHE NEXT ENEMY APPROACHES!!!!\n");
            }
        }
    }

    
    //RESULT
    

    if(playerHP <= 0)
    {
        printf("\n================================\n");
        printf("            GAME OVER\n");
        printf("================================\n");
    }
    else if(enemyIndex == 5)
    {
        printf("\n================================\n");
        printf("       YOU DEFEATED THE DRAGON!\n");
        printf("          YOU WIN!!!\n");
        printf("================================\n");
    }
    else if(escape == 1)
    {
        printf("\nGAME ENDED!!!LOSER.\n");
    }
    }
    return 0;
}