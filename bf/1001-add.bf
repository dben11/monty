,       ; read character and store it in cell_block0
>       ; move pointer to cell_block1
,
[       ; enter a loop
        <       ; move back to cell_block0
        +       ; increment with 1
        >       ; Move the pointer to cell_block1
        -       ; decrement by 1
]       ; exit loop when the cell_block1 is empty
<       ; move to cell_block0
------------------------------------------------        ; subtract 48 from the block
.       ; print out cell_block0
