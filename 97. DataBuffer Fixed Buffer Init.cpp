/*
Create a class DataBuffer that simulates a small fixed-size buffer commonly used in embedded systems.

The buffer uses a statically allocated array of size 20, and its effective size is determined during construction.

    Private members:
        int size → effective buffer size (1–20)
        int buffer[20] → fixed internal storage
        int writeIndex → next write position
    Constructor Requirements:
        Create a constructor:

            DataBuffer(int s)

        The constructor must:
            Clamp size as follows:
                If s < 1, set size = 1
                If s > 20, set size = 20
                Otherwise, size = s
        Initialize all 20 elements of buffer to 0
        Set writeIndex = 0
        This models deterministic startup behavior typical in firmware systems.
    Public methods:
        void push(int v)
            If writeIndex < size:
                Store v in buffer[writeIndex]
                Increment writeIndex
            If the buffer is full, ignore the value and do not modify state
        void print()
            Print stored values from index 0 to writeIndex - 1
            Values must be space-separated
            Print nothing if no values are stored

Program behavior (main):

    Read integer s → requested buffer size
    Read integer n → number of values to push
    Read and push n integers
    Print the final stored buffer contents
*/