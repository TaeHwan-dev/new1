package com.example.petar;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class Music extends AppCompatActivity {

    ImageView play;

    boolean selected = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_music);

        play = findViewById(R.id.play);
        play.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){

                if(selected){
                    play.setSelected(false);
                    selected = false;
                }else{
                    play.setSelected(true);
                    selected = true;
                }
            }


        });

    }
}