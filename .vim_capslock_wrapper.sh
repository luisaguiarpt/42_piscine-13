#!/bin/bash

# Set alias vim=".vim_capslock_wrapper.sh" for this to work always

# Detect display protocol (Wayland or Xorg)
if [ "$XDG_SESSION_TYPE" = "wayland" ]; then
    USE_GSETTINGS=true
else
    USE_GSETTINGS=false
fi

# Check if any Vim processes are running (excluding this script)
check_vim_running() {
    pgrep -f "vim|nvim" | grep -qv $$  # Ignore this script's process
}

# Set CapsLock to Escape if no Vim is running
if ! check_vim_running; then
    if [ "$USE_GSETTINGS" = true ]; then
        gsettings set org.gnome.desktop.input-sources xkb-options "['caps:escape']"
    else
        setxkbmap -option caps:escape
    fi
fi

# Launch Vim with passed arguments
vim "$@"

# After Vim exits, check if no instances remain
if ! check_vim_running; then
    if [ "$USE_GSETTINGS" = true ]; then
        gsettings reset org.gnome.desktop.input-sources xkb-options
    else
        setxkbmap -option
    fi
fi
