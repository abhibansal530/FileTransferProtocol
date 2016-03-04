# FileTransferProtocol
A file transfer application made in c++

How to run:-
$> bash run.sh

Now two peers - peer1 and peer2 will be created

Available Commands:-

1.IndexGet flag (args)
	->Can request display of shared files on connected system.
	->flag can be - shortlist,longlist,or regex
	--shortlist:
		->Display name of files between two timestamps
		$> IndexGet --shortlist <starttimestamp> <endtimestamp>
		timestamp format -> Date-Month-Year-Hour:minute:second ex.-> 2-3-2016-13:3:3
	--longlist:
		->Display all files
		$> IndexGet --longlist

	--regex:
		->Display file names matching given regex.
		$> IndexGet --regex .*.cpp

Output:Name,size,timestamp,and type of resulting files.
2.FileHash flag (args)
	->To check if any files on the other end has been changed.
	flag can be --verify,or --checkall.

	--verify:
		$> FileHash --verify <filename>
		Output:checksum and lastmodified timestamp of input file.

	--checkall:
		$> FileHash --checkall
		Output:output of 'verify' on every file present.

3.FileDownload flag (args)
	Used to download files from shared folder from connected user to our folder.
	flag can be UDP or TCP denoting which protocol to use to download file.

	ex. $> FileDownload TCP <filename> or FileDownload UDP <filename>
	Output: Contain filename,filesize,lastmodified timestamp,and MD5hash of requested file.
