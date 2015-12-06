syn on
set nu
set ruler
set backupdir=~/.vim/
inoremap {		{}<Left>
inoremap {<CR>	{<CR>}<Esc>O
inoremap {{		 {
inoremap {}		 {}
inoremap		( 	()<Left>
inoremap <expr> ) 	strpart(getline('.'), col('.')-1, 1) == ")" ? "\<Right>" : ")"
inoremap		[ 	[]<Left>
inoremap <expr> ] 	strpart(getline('.'), col('.')-1, 1) == "]" ? "\<Right>" : "]"
inoremap		' 	''<Left>
inoremap		" 	""<Left>
:highlight Space ctermbg=darkred guibg=darkred
match Space / [ \n]/
