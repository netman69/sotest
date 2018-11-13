class Print
{
    private:
        int q = 1;
        volatile int y = 0;

    public:
        Print();
        void print();
        void extra();
};
