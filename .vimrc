" Compatibility settings
set nocompatible "Disable compatibility with vi which can cause unexpected issues
filetype on 	 "Enable type file detection
filetype plugin on "Enable plugins and load plugin for the detected filetype
" Workflow settings

set number         "Sets lines to be numbered
syntax on          "Set syntax highlight on
set mouse=r        "Enable mouse click, + enable copy paste without taking line number
set cursorline	   "Enables cursor line position tracking
set cursorcolumn   "Enables cursos column position tracking
set noexpandtab    "Sets tab to /t instead of spaces
set tabstop=4      "Set tab to 4 spaces
set shiftwidth=4   "Set indentation width
set softtabstop=4  "Makes backspace behave consistently
set cindent
set nowrap         "No line wrapping
set incsearch      "Incrementally highlight characters as you typr
set hlsearch       "Use highlighting when doing a search

" inorep mappings
" Creates properly formatted curly braces
inoremap {<CR> {<CR>}<Esc>O
" Maps CAPSLOCK to act as ESC in all modes
inoremap <CapsLock> <Esc>
nnoremap <CapsLock> <Esc>
vnoremap <CapsLock> <Esc>

hi Normal guibg=NONE ctermbg=NONE     "Keep vim transparency
highlight CursorLine ctermbg=darkgrey cterm=bold	"highlight row with foreground background and style as defined
highlight CursorLineNR ctermfg=red ctermbg=darkblue cterm=bold	"Sets the line numbering to red background
