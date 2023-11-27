echo "Fetching..."
rm -r .ccls_cache
git rm .ccls_cache
git add .
git commit -m "$1"
git push