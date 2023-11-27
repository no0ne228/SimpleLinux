echo "Fetching..."
rm -rf .ccls_cache
git add .
git commit -m "$1"
git push