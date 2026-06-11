#include <stdio.h>
#include <math.h>

#define ROWS 20
#define COLS 40

char pic[ROWS][COLS];

// Initialize picture
void initialize()
{
    int i, j;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            pic[i][j] = '_';
        }
    }
}

// Display picture
void display()
{
    int i, j;

    printf("\n");

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("%c ", pic[i][j]);
        }
        printf("\n");
    }
}

// Draw rectangle
void rectangle(int r, int c, int h, int w)
{
    int i, j;

    for(i=r;i<r+h;i++)
    {
        for(j=c;j<c+w;j++)
        {
            if(i<ROWS && j<COLS)
                pic[i][j]='*';
        }
    }
}

// Draw horizontal line
void line(int row, int c1, int c2)
{
    int j;

    for(j=c1;j<=c2;j++)
    {
        if(row<ROWS && j<COLS)
            pic[row][j]='*';
    }
}

// Draw triangle
void triangle(int r, int c, int h)
{
    int i, j;

    for(i=0;i<h;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(r+i<ROWS && c+j<COLS)
                pic[r+i][c+j]='*';
        }
    }
}

// Draw circle
void circle(int x, int y, int radius)
{
    int i, j;

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            if((i-x)*(i-x)+(j-y)*(j-y)<=radius*radius)
                pic[i][j]='*';
        }
    }
}

// Delete rectangle
void deleteRectangle(int r, int c, int h, int w)
{
    int i, j;

    for(i=r;i<r+h;i++)
    {
        for(j=c;j<c+w;j++)
        {
            if(i<ROWS && j<COLS)
                pic[i][j]='_';
        }
    }
}

int main()
{
    int choice;
    int r, c, h, w, c1, c2, radius;

    initialize();

    do
    {
        printf("\n1. Draw Rectangle");
        printf("\n2. Draw Line");
        printf("\n3. Draw Triangle");
        printf("\n4. Draw Circle");
        printf("\n5. Delete Rectangle");
        printf("\n6. Display Picture");
        printf("\n7. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter row column height width: ");
                scanf("%d%d%d%d",&r,&c,&h,&w);
                rectangle(r,c,h,w);
                break;

            case 2:
                printf("Enter row start_column end_column: ");
                scanf("%d%d%d",&r,&c1,&c2);
                line(r,c1,c2);
                break;

            case 3:
                printf("Enter row column height: ");
                scanf("%d%d%d",&r,&c,&h);
                triangle(r,c,h);
                break;

            case 4:
                printf("Enter center_x center_y radius: ");
                scanf("%d%d%d",&r,&c,&radius);
                circle(r,c,radius);
                break;

            case 5:
                printf("Enter row column height width: ");
                scanf("%d%d%d%d",&r,&c,&h,&w);
                deleteRectangle(r,c,h,w);
                break;

            case 6:
                display();
                break;
        }

    } while(choice != 7);

    return 0;
}