#   find . -name "*.sh" -type f | sed 's#.*/##; s#[.][^.]*$##'
# find . -name "*.sh" -type f -printf "%f\n" | sed 's/.sh//'
# find . -name "*.sh" -type f -print | sed 's#\.sh$##'
find . -name "*.sh" -type f | sed 's#.*/##; s#[.][^.]*$##'
