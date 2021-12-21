/* Function to show distribution of hashing 
    example node structure for a hashtable containing words */

//include <stdio.h>

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
        if (hashTable[i] == NULL)
        {
            printf("Row %i is empty.\n", i);
        }
        else
        {
            printf("Row %i:\n", i);
            for (node* tmp = hashTable[i]; tmp != NULL; tmp = tmp->next)
            {
              // (Change according to type)
              printf("\t%s\n", tmp->word);
            }
            printf("\n");
        }
    }
    return;
}
