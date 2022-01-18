for i in $(seq 60);
do
    ps aux | grep "python" | grep "guoql" | grep -v grep| cut -c 10-15 | xargs kill -9
    sleep 5s 
done