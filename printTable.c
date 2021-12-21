/* Function to show distribution of hashing */

//include <stdio.h>

// -- example node structure for a hashtable containing words --
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

void printTable(node* hashTable[], int tableRows)
{
    for (int i = 0; i < tableRows; i++)
    {
        // ASSUMING THE USER HAD SET EMPTY ROWS TO NULL:
        if (hashTable[i] == NULL)
        {
            printf("Row %i is empty.\n", i);
        }
        else
        {
            printf("Row %i:\n", i);

            //loop thru each node of linked list, printing their words.
            for (node* tmp = hashTable[i]; tmp != NULL; tmp = tmp->next)
            {
              // CHANGE PLACEHOLDER IF USING DIFFERENT TYPES
              printf("\t%s\n", tmp->word);
            }
            printf("\n");
        }
    }
    return;
}
