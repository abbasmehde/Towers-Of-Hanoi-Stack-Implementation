struct element
{
    int disk_size;
};
struct node
{
    struct element data;

    struct node * next;
};

