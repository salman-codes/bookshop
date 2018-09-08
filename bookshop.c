#include <stdio.h>
#include <conio.h>
struct bookshop
{
	char author[100];
	char title[100];
	int isbn;
	int price;
	int stock_pos;
};
void main()
{
	int i,n,x,p;
	char m[100];
	struct bookshop b[3];
	clrscr();
	printf("Enter information of books\n\n");
	for(i=0; i<3; i++)
	{
		printf("For Book no.: %d",i+1);
		printf("\nEnter book name: ");
		scanf("%s",b[i].title);
		printf("Enter author name: ");
		scanf("%s",b[i].author);
		printf("Enter book's ISBN number: ");
		scanf("%d",b[i].isbn);
		printf("Enter book's stock position: ");
		scanf("%d",b[i].stock_pos);
		printf("Enter book's price: ");
		scanf("%d",b[i].price);
		printf("\n");
	}
	printf("How you want to search?\n");
	printf("Enter 0 for ISBN\nEnetr 1 for title: ");
	scanf("%d",&x);
	if(x==0)
	{
		printf("\nEnter ISBN number:");
		scanf("%d",&n);
		for(i=0; i<3; i++)
		{
			if(n==b[i].isbn)
			{
				printf("For ISBN: %d",n);
				printf("\nAuthor: %s",b[i].author);
				printf("\nTitle: %s",b[i].title);
				printf("\nPrice: %d",b[i].price);
				printf("\nHow many copies you want? ");
				scanf("%d",&p);
				if(p<=b[i].stock_pos)
					printf("Total price= %d",p * b[i].price);
				else
					printf("Requested copies are not in stock");
			}
			else
				printf("\nThis ISBN number does not follow any book");
		}
	}
	else if(x==1)
	{
		printf("Enter Title of book: ");
		scanf("%s",&m);
		for(i=0; i<3; i++)
		{
			if(m==b[i].title)
			{
				printf("For Title: %s",m);
				printf("\nAuthor: %s",b[i].author);
				printf("\nISBN: %d",b[i].isbn);
				printf("\nprice: %d",b[i].price);
				printf("\nHow many copies you want? ");
				scanf("%d",&p);
				if(p<=b[i].stock_pos)
					printf("Total price=%d",p *  b[i].price);
				else
					printf("Requested copies are not in stock");
			}
			else
				printf("\nInvalid title or book is not available");
		}
	}
	getch();
}