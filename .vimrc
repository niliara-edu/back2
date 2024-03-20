set nocompatible              " be iMproved, required
filetype off                  " required

set rtp+=~/.vim/bundle/Vundle.vim

set termguicolors


call vundle#begin()

Plugin 'VundleVim/Vundle.vim'
Plugin 'kjwon15/vim-transparent'
Plugin 'mattn/emmet-vim'
Plugin 'qpkorr/vim-renamer'
Plugin 'mathofprimes/nightvision-vim'
Plugin 'catppuccin/vim'
Plugin 'dylanaraps/wal.vim'
Plugin 'puremourning/vimspector'

call vundle#end()

"colorscheme evening
colorscheme nightvision
set background=dark

let g:nv_dark = 'jade'
let g:nv_contrast = "hard"

filetype plugin indent on    " required

packadd termdebug

autocmd Filetype dart setlocal expandtab tabstop=4 shiftwidth=4 softtabstop=4
setlocal expandtab tabstop=4 shiftwidth=4 softtabstop=4

filetype indent on
set smartindent
syntax on
