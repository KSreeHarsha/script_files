

if [ $# -eq 0 ]; then
    echo "Please provide commit message"
    exit 1
fi

git pull
git add --all
git commit -m $1
git push
git status
