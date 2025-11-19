# Still running Bash?

Starting with MacOS 10.15, the default Unix shell is now Zsh. If you migrated from an older version of MacOS, you might still be using Bash (you can check by running `echo $0`). If so, run this script instead:

```console
export DEVKITPRO=/opt/devkitpro
echo "export DEVKITPRO=$DEVKITPRO" >> ~/.bashrc
export DEVKITARM=$DEVKITPRO/devkitARM
echo "export DEVKITARM=$DEVKITARM" >> ~/.bashrc

echo "if [ -f ~/.bashrc ]; then . ~/.bashrc; fi" >> ~/.bash_profile
```
