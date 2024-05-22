#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"
#define MAX_SIZE 1000 

int disk_size = 400;
struct request {
    int request_track_number;
    bool visited;
};

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void FCFS(){
    int i,no_of_requests,initial_head;
	printf("Enter the number of requests: ");
	scanf("%d",&no_of_requests);
	int request[no_of_requests];
	printf("Enter the requests: ");
	for (i = 0; i < no_of_requests; ++i)
	{
		scanf("%d",&request[i]);
	}
	printf("Enter initial position of R/W head: ");
	scanf("%d",&initial_head);
	int seek_time=0;
	printf("%d -> ",initial_head );
	for(i=0;i<no_of_requests;i++)
	{
		if(i == no_of_requests-1)
			printf("%d\n", request[i] );
		else
			printf("%d -> ", request[i] );
		seek_time += abs(request[i] - initial_head);
		initial_head = request[i];
	}
	printf("Seek Time: %d\n", seek_time);
}

void SSTF(){
    int i,no_of_requests,initial_head,limit,j,choice,previous_head;
	printf("Enter the number of requests: ");
	scanf("%d",&no_of_requests);
	struct request req[no_of_requests];
	printf("Enter the requests: ");
	for (i = 0; i < no_of_requests; ++i)
	{
		scanf("%d",&req[i].request_track_number);
		req[i].visited = false;
	}
	printf("Enter initial position of R/W head: ");
	scanf("%d",&initial_head);

	int seek_time=0;
	printf("%d -> ",initial_head );
	int n = no_of_requests;
	while(n)
	{
		int min = 1e9;
		int min_track_number, position;
		for(i=0;i<no_of_requests;i++)
		{
			if(abs(initial_head - req[i].request_track_number) < min && req[i].visited == false)
			{
				min = abs(initial_head - req[i].request_track_number);
				min_track_number = req[i].request_track_number;
				position = i;
			}
		}
		initial_head = req[position].request_track_number;
		req[position].visited = true;
		printf("%d ->",min_track_number);
		seek_time += min;
		n--;
	}

	printf("\nSeek Time: %d\n", seek_time);
}

void SCAN() {
    int size,head;
    char direction[MAX_SIZE];
    printf("Enter the size of the request array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the request array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the initial position of the head: ");
    scanf("%d", &head);
    printf("Enter the direction of head movement (left or right): ");
    scanf("%s", direction);
    int seek_count = 0;
    int distance, cur_track;
    int left[MAX_SIZE], right[MAX_SIZE], seek_sequence[MAX_SIZE];
    int left_size = 0, right_size = 0, seek_sequence_size = 0;
    
    if (strcmp(direction, "left") == 0)
        left[left_size++] = 0;
    else if (strcmp(direction, "right") == 0)
        right[right_size++] = disk_size - 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] < head)
            left[left_size++] = arr[i];
        if (arr[i] > head)
            right[right_size++] = arr[i];
    }
    
    qsort(left, left_size, sizeof(int), compare);
    qsort(right, right_size, sizeof(int), compare);
    
    int run = 2;
    while (run--) {
        if (strcmp(direction, "left") == 0) {
            for (int i = left_size - 1; i >= 0; i--) {
                cur_track = left[i];
                
                seek_sequence[seek_sequence_size++] = cur_track;
                
                distance = abs(cur_track - head);
                
                seek_count += distance;
                
                head = cur_track;
            }
            strcpy(direction, "right");
        }
        else if (strcmp(direction, "right") == 0) {
            for (int i = 0; i < right_size; i++) {
                cur_track = right[i];
                
                seek_sequence[seek_sequence_size++] = cur_track;
                
                distance = abs(cur_track - head);
                
                seek_count += distance;
                
                head = cur_track;
            }
            strcpy(direction, "left");
        }
    }
    printf("Total number of seek operations = %d\n", seek_count);
    printf("Seek Sequence is\n");
    for (int i = 0; i < seek_sequence_size; i++) {
        printf("%d ->", seek_sequence[i]);
    }
    printf("\n");
}
void CSCAN() {
    int size,head;
    printf("Enter the size of the request array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the request array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the initial position of the head: ");
    scanf("%d", &head);
    int seek_count = 0;
    int distance, cur_track;
    int left[200], right[200], seek_sequence[200];
    int left_size = 1, right_size = 1, seek_sequence_size = 0;
    
    left[0] = 0;
    right[0] = disk_size - 1;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < head) {
            left[left_size] = arr[i];
            left_size++;
        }
        if (arr[i] > head) {
            right[right_size] = arr[i];
            right_size++;
        }
    }
    
    qsort(left, left_size, sizeof(int), compare);
    qsort(right, right_size, sizeof(int), compare);
    
    for (int i = 0; i < right_size; i++) {
        cur_track = right[i];
        
        seek_sequence[seek_sequence_size] = cur_track;
        seek_sequence_size++;
        
        distance = abs(cur_track - head);
        
        seek_count += distance;
        
        head = cur_track;
    }
    
    head = 0;
    
    seek_count += (disk_size - 1);
    
    for (int i = 0; i < left_size; i++) {
        cur_track = left[i];
        
        seek_sequence[seek_sequence_size] = cur_track;
        seek_sequence_size++;
        
        distance = abs(cur_track - head);
        
        seek_count += distance;
        
        head = cur_track;
    }
    printf("Total number of seek operations = %d\n", seek_count);
    printf("Seek Sequence is\n");
    for (int i = 0; i < seek_sequence_size; i++) {
        printf("%d ->", seek_sequence[i]);
    }
    printf("\n");
}
void LOOK() 
{ 
    int size,head;
    char direction[MAX_SIZE];
    printf("Enter the size of the request array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the request array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the initial position of the head: ");
    scanf("%d", &head);
    printf("Enter the direction of head movement (left or right): ");
    scanf("%s", direction);
    int seek_count = 0; 
    int distance, cur_track; 
    int left[100], right[100]; 
    int left_size = 0, right_size = 0;
    int seek_sequence[200], seek_sequence_size = 0; 

    for (int i = 0; i < size; i++) { 
        if (arr[i] < head) 
            left[left_size++] = arr[i]; 
        if (arr[i] > head) 
            right[right_size++] = arr[i]; 
    } 
    qsort(left, left_size, sizeof(int), compare); 
    qsort(right, right_size, sizeof(int), compare); 
    int run = 2; 
    while (run--) { 
        if (strcmp(direction, "left") == 0) { 
            for (int i = left_size - 1; i >= 0; i--) { 
                cur_track = left[i]; 
                
                seek_sequence[seek_sequence_size++] = cur_track; 
                
                distance = abs(cur_track - head); 
                
                seek_count += distance; 
                
                head = cur_track; 
            } 
            
            strcpy(direction, "right"); 
        } 
        else if (strcmp(direction, "right") == 0) { 
            for (int i = 0; i < right_size; i++) { 
                cur_track = right[i]; 
                
                seek_sequence[seek_sequence_size++] = cur_track; 
                
                distance = abs(cur_track - head); 
                
                seek_count += distance; 
                
                head = cur_track; 
            } 
            
            strcpy(direction, "left"); 
        } 
    } 
    printf("Total number of seek operations = %d\n", seek_count); 
    printf("Seek Sequence is\n"); 
    for (int i = 0; i < seek_sequence_size; i++) { 
        printf("%d ->", seek_sequence[i]); 
    } 
    printf("\n");
}
void CLOOK() {
    int size,head;
    printf("Enter the size of the request array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the request array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the initial position of the head: ");
    scanf("%d", &head);
    int seek_count = 0;
    int distance, cur_track;
    int left[1000], right[1000];
    int left_size = 0, right_size = 0;
    int seek_sequence[1000], seek_sequence_size = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < head) {
            left[left_size] = arr[i];
            left_size++;
        }
        if (arr[i] > head) {
            right[right_size] = arr[i];
            right_size++;
        }
    }
    
    qsort(left, left_size, sizeof(int),compare);
    qsort(right, right_size, sizeof(int), compare);
    
    for (int i = 0; i < right_size; i++) {
        cur_track = right[i];
        
        seek_sequence[seek_sequence_size] = cur_track;
        seek_sequence_size++;
        
        distance = abs(cur_track - head);
        
        seek_count += distance;
        
        head = cur_track;
    }
    
    if (left_size > 0) {
        seek_count += abs(head - left[0]);
        head = left[0];
    }
    
    for (int i = 0; i < left_size; i++) {
        cur_track = left[i];
        
        seek_sequence[seek_sequence_size] = cur_track;
        seek_sequence_size++;
        
        distance = abs(cur_track - head);
        
        seek_count += distance;
        
        head = cur_track;
    }
    printf("Total number of seek operations = %d\n", seek_count);
    printf("Seek Sequence is\n");
    for (int i = 0; i < seek_sequence_size; i++) {
        printf("%d ->", seek_sequence[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    do {
        printf("\nDisk Scheduling Algorithms\n");
        printf("1. FCFS\n");
        printf("2. SSTF\n");
        printf("3. SCAN\n");
        printf("4. CSCAN\n");
        printf("5. LOOK\n");
        printf("6. CLOOK\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                FCFS();
                break;
            case 2:
                SSTF();
                break;
            case 3:
                SCAN();
                break;
            case 4:
                CSCAN();
                break;
            case 5:
                LOOK();
                break;
            case 6:
                CLOOK();
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);
    return 0;
}