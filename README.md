# Simple CGM Spark

* Code is ripe for refactoring and general code cleanup - working as a beta in pebble's watchface store.
* Please use your own uuid for the app when building.
* If you want to use timeline, you will need to add those keys as well.


![BG is within user-specified range](https://assets.getpebble.com/api/file/J3UfWwwgT5yCkaRY1pQn/convert?cache=true&amp;fit=crop&amp;w=144&amp;h=168!) ![Alert that BG is out of user-specified range](https://assets.getpebble.com/api/file/y3W7tIVwQDagygyvJLYG/convert?cache=true&amp;fit=crop&amp;w=144&amp;h=168)


## Download from the Pebble Store
[Download this to your Pebble watch](https://apps.getpebble.com/en_US/application/56534d58d2d67de36d00005f?section=watchfaces)

#### Important User Notice
This app is not supported or endorsed by Dexcom. Simple CGM MUST NOT BE USED TO MAKE MEDICAL DECISIONS. THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW. EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM “AS IS” WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU. SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION. 
 
 The watchface requires: 
 * Active use of the Share receiver with the Dexcom Share2 iOS application sending data to their cloud service.
 * OR active use of recent Nightscout version.

## Other CGM Watchfaces
This is just one of many CGM watchfaces available for the Pebble. This watchface aims to provide a simple, glanceable overview of the data available from Dexcom Share or a Nightscout server. If you are looking for an additional feature that this watchface doesn't have, explore some of the other options available at <http://www.nightscout.info/wiki/cgm-watchfaces>. 


# Developers

To get started, we recommend that refer to the [Pebble Developer](https://developer.pebble.com/) site.

## Homebrew for Local Development

    brew install pebble/pebble-sdk/pebble-sdk

## Rapid Local Development with gulp
To enable rapid iteration on your local machine, you can use [gulp](http://gulpjs.com/) to watch for changes to your code, build the files, and automatically install it to your Pebble (or launch an emulator) just by saving your edits. Gulp requires that you have Node installed locally.

    # Install node if you don't already have it
    brew install node
    
    # Switch to the working directory
    cd {cgm-simple-spark}
    
    # Download the node modules for gulp to run
    npm install

On your first run, you'll want to review the variables set at the top of `gulpfile.js` and edit them to fit your needs.

Once you have the node environment ready, running gulp is as simple as:

    gulp watch




## Eclipse
To setup a development environment in Eclipse or other C editor, you'll want to setup a soft link to pebble.h so that your local source can easily compile. To do this.

   PEBBLE_INC=$(pebble sdk include-path chalk)
   ln -s "$PEBBLE_INC/pebble.h" pebble.h
   
   
## Credits

Made with love for Evan and Tyler.