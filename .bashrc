alias pipActivate='source ~/Gears/venv/bin/activate'
alias volUp='pactl set-sink-volume @DEFAULT_SINK@ +10%'
alias volDown='pactl set-sink-volume @DEFAULT_SINK@ -10%'
alias autoremove='sudo pacman -R $(pacman -Qdtq)'
alias bat='upower -i $(upower -e | grep "BAT") | grep -E "state|to full|percentage"'

alias l1='sudo setxkbmap us'
alias l2='sudo setxkbmap es'

export PATH=/home/niliara/.cargo/bin/:$PATH
export PATH="$HOME/.cabal/bin:$HOME/.ghcup/bin:$PATH"
export PATH="${PATH}:${HOME}/.local/bin/"
